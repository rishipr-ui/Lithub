def encrypt(plaintext):
    encrypted_text = ""
    for char in plaintext:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            encrypted_char = chr((ord(char) - ascii_offset + 13) % 26 + ascii_offset)
            encrypted_text += encrypted_char
        else:
            encrypted_text += char
    return encrypted_text

def decrypt(ciphertext):
    decrypted_text = ""
    for char in ciphertext:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            decrypted_char = chr((ord(char) - ascii_offset - 13) % 26 + ascii_offset)
            decrypted_text += decrypted_char
        else:
            decrypted_text += char
    return decrypted_text

plaintext = "Hello, this is a plaintext"
encrypted_text = encrypt(plaintext)
print(encrypted_text)  

decrypted_text = decrypt(encrypted_text)
print(decrypted_text) 