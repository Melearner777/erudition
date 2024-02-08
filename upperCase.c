#include <stdio.h>
#include <ctype.h> // For toupper()

int main() {
    char myString[] = "hello world";
    
    for (int i = 0; myString[i] != '\0'; i++) {
        myString[i] = toupper(myString[i]);
    }

    printf("Uppercase String: %s\n", myString);
    return 0;
}
