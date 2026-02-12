#include <ctype.h>
#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (isdigit(a))
    {
        printf("Digit");
    }
    else
    {
        printf("Not Digit");
    }
    return 0;
}
