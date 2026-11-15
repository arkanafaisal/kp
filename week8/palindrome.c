#include <stdio.h>

int main() {
    char text[100];
    int length = 0;

    printf("Masukkan string: ");
    scanf(" %[^\n]", text);

    while (text[length] != '\0') {
        length++;
    }

    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (text[i] != text[length - 1 - i]) {
            isPalindrome = 0;
        }
    }

    printf("String %s palindrom\n", (isPalindrome?"adalah":"bukan") );


    return 0;
}
