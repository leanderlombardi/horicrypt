#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 1024

void encrypt(char *message, int key);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: horicrypt <key> <message>\n");
        return 64;
    } else {
        int key = atoi(argv[1]);
        char message[MAX_MESSAGE_LENGTH + 1];
        strncpy(message, argv[2], MAX_MESSAGE_LENGTH);
        message[MAX_MESSAGE_LENGTH] = '\0'; // Ensure null-termination

        encrypt(message, key);

        printf("En/Decrypted message: %s\n", message);
    }

    return 0;
}

void encrypt(char *message, int key) {
    int len = strlen(message);
    for (int i = 0; i < len; ++i) {
        message[i] ^= key;
    }
}

