#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
        {
        printf("%d  is largest value",a);
    }
    else if (b>a && b>c) {
        printf("%d is largest value",b);
        }
    else {
        printf("%d is largest value",c);
    }
        return 0;
  
