// Simple XOR decryption function
void decrypt(char *text) {
    for (int i = 0; i < strlen(text); i++) {
        text[i] = text[i] ^ ENCRYPTION_KEY;
    }
}