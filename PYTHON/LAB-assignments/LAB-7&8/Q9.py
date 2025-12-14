import re

# Regular expressions for various components
patterns = {
    "punctuation": r"[.,!?;:(){}[\]\"\'-]",  # Punctuation marks
    "date": r"\b(?:\d{1,2}[/-]\d{1,2}[/-]\d{2,4}|\d{4}[/-]\d{1,2}[/-]\d{1,2})\b",  # Dates
    "url": r"https?://[a-zA-Z0-9./?=_-]+",  # URL (http or https)
    "email": r"[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}",  # Email
    "number": r"\b(\d{1,3}(?:,\d{3})*|\d+(\.\d+)?|\d+/\d+)\b",  # Numbers (including commas, decimals, fractions)
    "social_media_handle": r"@[\w_]+",  # Social media usernames
    "unicode_language": r"[\u0900-\u097F]+",  # Example for Hindi (Unicode range for Devanagari script)
}

# Tokenizer function
def tokenize(text):
    tokens = []
    
    # Combine all regex patterns
    combined_pattern = "|".join(f"(?P<{key}>{pattern})" for key, pattern in patterns.items())
    
    for match in re.finditer(combined_pattern, text):
        # Identify which group matched
        for group_name, value in match.groupdict().items():
            if value is not None:
                tokens.append((group_name, value))
    
    return tokens

# Example text to tokenize
text = """
Hello, my name is vansh! I visited USA on 12/05/2021, and here is my email: john.doe@example.com.
Check out my blog at https://example.com. I saw @user123 on Twitter. My balance is 33,500.45 INR.
The fraction 3/4 was also mentioned in the document. Finally, let's talk in Hindi: नमस्ते।
"""

# Tokenize the text
tokens = tokenize(text)

# Print the tokens
for token in tokens:
    print(f"{token[0]}: {token[1]}")