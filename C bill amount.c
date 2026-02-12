#include <stdio.h>
int main() {
    int units;
    int bill;
    scanf("%d",&units);
    if (units<=100)
    {
        bill=units*4;
    }
    else
    {
        bill=(100*4)+(units-100)*10;
    }
    printf("Bill Amount = Rs:%d",bill);
    return 0;
}
