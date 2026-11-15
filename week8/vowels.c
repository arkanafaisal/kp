#include <stdio.h>

int main() {
    char text[100];
    int count = 0;

    printf("Masukkan string: ");
    scanf("%[^\n]", text);

    int i = 0;
    while (text[i] != '\0') {
        switch (text[i]) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                count++;
                break;
        }
        i++;
    }

    printf("Jumlah huruf vokal: %d\n", count);

    return 0;
}
