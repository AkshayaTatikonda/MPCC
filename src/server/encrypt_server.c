// Simple XOR encryption function
void encrypt(char *text) {
    for (int i = 0; i < strlen(text); i++) {
        text[i] = text[i] ^ ENCRYPTION_KEY;
    }
}
 
