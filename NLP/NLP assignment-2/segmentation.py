import math

# ============================================================
# 1. GREEDY BASED APPROACH
#    Always selects the longest matching word
# ============================================================

def greedy_segment(text, words):
    result = []
    i = 0

    while i < len(text):

        best_word = ""

        # Check every word in dictionary
        for word in words:

            if text.startswith(word, i):

                # Select longest matching word
                if len(word) > len(best_word):
                    best_word = word

        # If a word is found
        if best_word:
            result.append(best_word)
            i += len(best_word)

        # If no word is found
        else:
            result.append(text[i])
            i += 1

    return result


# ============================================================
# 2. DYNAMIC PROGRAMMING APPROACH
#    Maximizes the log probability of the segmentation
# ============================================================

def dp_segment(text, word_counts):

    n = len(text)

    # dp[i] = maximum log probability
    # for the first i characters
    dp = [-float("inf")] * (n + 1)

    # prev[i] = previous position used to reach i
    prev = [-1] * (n + 1)

    # Empty string has probability 1
    # log(1) = 0
    dp[0] = 0

    # Total number of words in corpus
    total = sum(word_counts.values())

    # --------------------------------------------------------
    # Calculate log probability for every word
    # --------------------------------------------------------

    log_prob = {}

    for word, count in word_counts.items():

        probability = count / total

        log_prob[word] = math.log(probability)

    # Maximum word length in dictionary
    max_len = max(len(word) for word in word_counts)

    # --------------------------------------------------------
    # Dynamic Programming
    # --------------------------------------------------------

    for i in range(1, n + 1):

        # We don't need to check words longer than max_len
        start = max(0, i - max_len)

        for j in range(start, i):

            word = text[j:i]

            # Check whether this is a valid dictionary word
            if word in log_prob:

                # If previous position is reachable
                if dp[j] != -float("inf"):

                    score = dp[j] + log_prob[word]

                    # Keep the best score
                    if score > dp[i]:

                        dp[i] = score
                        prev[i] = j

    # --------------------------------------------------------
    # Reconstruct the segmentation
    # --------------------------------------------------------

    result = []

    i = n

    while i > 0:

        # No valid word found
        if prev[i] == -1:

            result.append(text[i - 1])
            i -= 1

        else:

            j = prev[i]

            result.append(text[j:i])

            i = j

    # We reconstructed backwards
    result.reverse()

    return result


# ============================================================
# 3. EDIT DISTANCE
#    Levenshtein distance
# ============================================================

def edit_distance(a, b):

    n = len(a)
    m = len(b)

    # Create DP table
    dp = [[0] * (m + 1) for _ in range(n + 1)]

    # Convert a -> empty string
    for i in range(n + 1):
        dp[i][0] = i

    # Convert empty string -> b
    for j in range(m + 1):
        dp[0][j] = j

    # Fill table
    for i in range(1, n + 1):

        for j in range(1, m + 1):

            # Same word
            if a[i - 1] == b[j - 1]:
                cost = 0

            # Different word
            else:
                cost = 1

            # Minimum of:
            # 1. Delete
            # 2. Insert
            # 3. Replace
            dp[i][j] = min(
                dp[i - 1][j] + 1,
                dp[i][j - 1] + 1,
                dp[i - 1][j - 1] + cost
            )

    return dp[n][m]


# ============================================================
# 4. EXACT SEGMENTATION ACCURACY
# ============================================================

def segmentation_accuracy(predicted, actual):

    if predicted == actual:
        return 1

    return 0