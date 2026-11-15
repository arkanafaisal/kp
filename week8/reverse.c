#include <stdio.h>

int main() {
    char text[100];
    char reversed[100];

    printf("Masukkan string: ");
    scanf(" %[^\n]", text);

    int length = 0;
    while (text[length] != '\0') {
        length++;
    }

    int j = 0;
    for (int i = 0; i < length; i++) {
        reversed[j] = text[length - i - 1];
        j++;
    }
    reversed[j] = '\0';

    printf("Hasil reverse: %s\n", reversed);

    return 0;
}
