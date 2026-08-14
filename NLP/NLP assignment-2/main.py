import json

from segmentation import (
    greedy_segment,
    dp_segment,
    edit_distance
)


# ============================================================
# LOAD DATASET
# ============================================================

with open("text_segmentation_dataset.json", "r", encoding="utf-8") as f:
    data = json.load(f)


# Get word frequencies and test cases
word_counts = data["word_counts"]
test_cases = data["test_cases"]

# List of dictionary words
words = list(word_counts.keys())


print("=" * 60)
print("TEXT SEGMENTATION")
print("=" * 60)

print("Vocabulary size :", len(word_counts))
print("Test cases      :", len(test_cases))


# ============================================================
# VARIABLES FOR EVALUATION
# ============================================================

greedy_correct = 0
dp_correct = 0

greedy_total_ed = 0
dp_total_ed = 0


# Store predictions for displaying examples
greedy_results = []
dp_results = []


# ============================================================
# PROCESS ALL TEST CASES
# ============================================================

for case in test_cases:

    # Input text
    text = case["input"]

    # Ground truth
    actual = case["ground_truth"].split()


    # --------------------------------------------------------
    # GREEDY
    # --------------------------------------------------------

    greedy_result = greedy_segment(text, words)

    # Check exact segmentation
    if greedy_result == actual:
        greedy_correct += 1

    # Edit distance
    greedy_ed = edit_distance(greedy_result, actual)

    greedy_total_ed += greedy_ed


    # --------------------------------------------------------
    # DYNAMIC PROGRAMMING
    # --------------------------------------------------------

    dp_result = dp_segment(text, word_counts)

    # Check exact segmentation
    if dp_result == actual:
        dp_correct += 1

    # Edit distance
    dp_ed = edit_distance(dp_result, actual)

    dp_total_ed += dp_ed


    # Save results
    greedy_results.append(greedy_result)
    dp_results.append(dp_result)


# ============================================================
# CALCULATE ACCURACY
# ============================================================

total_cases = len(test_cases)

greedy_accuracy = (greedy_correct / total_cases) * 100
dp_accuracy = (dp_correct / total_cases) * 100


# ============================================================
# CALCULATE AVERAGE EDIT DISTANCE
# ============================================================

greedy_avg_ed = greedy_total_ed / total_cases
dp_avg_ed = dp_total_ed / total_cases


# ============================================================
# DISPLAY SAMPLE RESULTS
# ============================================================

print("\n")
print("=" * 60)
print("SAMPLE RESULTS")
print("=" * 60)


for i in range(min(5, total_cases)):

    print("\nTest Case", i + 1)
    print("-" * 60)

    print("Input:")
    print(test_cases[i]["input"])

    print("\nGround Truth:")
    print(" ".join(test_cases[i]["ground_truth"].split()))

    print("\nGreedy:")
    print(" ".join(greedy_results[i]))

    print("\nDynamic Programming:")
    print(" ".join(dp_results[i]))


# ============================================================
# FINAL RESULTS
# ============================================================

print("\n")
print("=" * 60)
print("FINAL EVALUATION")
print("=" * 60)

print("\nGreedy Based Approach")
print("-" * 60)

print("Correct cases       :", greedy_correct)
print("Total cases         :", total_cases)
print("Accuracy            : {:.2f}%".format(greedy_accuracy))
print("Total Edit Distance :", greedy_total_ed)
print("Average Edit Dist.  : {:.2f}".format(greedy_avg_ed))


print("\nDynamic Programming Approach")
print("-" * 60)

print("Correct cases       :", dp_correct)
print("Total cases         :", total_cases)
print("Accuracy            : {:.2f}%".format(dp_accuracy))
print("Total Edit Distance :", dp_total_ed)
print("Average Edit Dist.  : {:.2f}".format(dp_avg_ed))


# ============================================================
# COMPARISON
# ============================================================

print("\n")
print("=" * 60)
print("COMPARISON")
print("=" * 60)

print("\n{:<25} {:>15} {:>20}".format(
    "Method",
    "Accuracy",
    "Avg Edit Distance"
))

print("-" * 60)

print("{:<25} {:>14.2f}% {:>19.2f}".format(
    "Greedy",
    greedy_accuracy,
    greedy_avg_ed
))

print("{:<25} {:>14.2f}% {:>19.2f}".format(
    "Dynamic Programming",
    dp_accuracy,
    dp_avg_ed
))

print("=" * 60)