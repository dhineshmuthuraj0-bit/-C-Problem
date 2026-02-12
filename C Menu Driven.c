#include <stdio.h>
int main() {
    int choice,a,b,sum;
    scanf("%d ", &choice);
    scanf("%d %d", &a, &b);
    switch (choice) {
        case 1:
            sum = a+b;
            printf("Sum = %d",sum);
            break;
        default:
            printf("Invalid Output");
    }
    return 0;
}
