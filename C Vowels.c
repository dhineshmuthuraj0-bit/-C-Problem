#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowels");
        default:
            printf("Consonants");
    }
    return 0;
