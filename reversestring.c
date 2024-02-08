#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char myString[] = "hello world";
    printf("Original String: %s\n", myString);
    reverse(myString);
    printf("Reversed String: %s\n", myString);
    return 0;
}

