def decode_ways(s, index=0, current_decoding="", result=None):
    if result is None:
        result = []
    
    if index == len(s):
        result.append(current_decoding)
        return
    
    # Single digit decoding
    num1 = int(s[index])
    if 1 <= num1 <= 9:
        decode_ways(s, index + 1, current_decoding + chr(num1 + 64), result)
    
    # Two digit decoding
    if index + 1 < len(s):
        num2 = int(s[index:index + 2])
        if 10 <= num2 <= 26:
            decode_ways(s, index + 2, current_decoding + chr(num2 + 64), result)
    
    return result

# Example Usage
if __name__ == "__main__":
    encoded_message = input("Enter the encoded message: ")
    decoded_messages = decode_ways(encoded_message)
    print("Possible Decoded Messages:")
    for msg in decoded_messages:
        print(msg)
