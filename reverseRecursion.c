#include <stdio.h>
#include <string.h>

void reverse(char* str, int start, int end) {
    if (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverse(str, start + 1, end - 1);
    }
}

int main() {
    char myString[] = "hello world";
    printf("Original String: %s\n", myString);
    reverse(myString, 0, strlen(myString) - 1);
    printf("Reversed String: %s\n", myString);
    return 0;
}

