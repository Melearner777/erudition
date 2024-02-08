#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    char* start = str;
    char* end = str + strlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char myString[] = "hello world";
    printf("Original String: %s\n", myString);
    reverse(myString);
    printf("Reversed String: %s\n", myString);
    return 0;
}
