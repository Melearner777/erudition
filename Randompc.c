#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10 // You can adjust the length of the password as needed

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Define characters to be used in the password
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*()-_";

    // Calculate the length of the charset
    int charset_length = sizeof(charset) - 1;

    // Generate the random password
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    for (int i = 0; i < PASSWORD_LENGTH; ++i) {
        password[i] = charset[rand() % charset_length];
    }
    password[PASSWORD_LENGTH] = '\0'; // Null terminator

    // Print the generated password
    printf("Random Password: %s\n", password);

        return 0;
}