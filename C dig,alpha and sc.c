
#include <ctype.h>
#include <stdio.h>
int main() {
    char text;
    scanf("%c",&text);
    if (isdigit(text)) {
        printf("Digit");
    }
    else if (isalpha(text)) {
        printf("Alapabet");
    }
    else {
        printf("Special Character");
    }
    return 0;
}
