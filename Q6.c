#include<stdio.h>
int main() {
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    int c ;
    c =a ;
    a = b;
    b = c;
    printf("After swapping first number is : %d\n", a);
    printf("After swapping second number is : %d\n",b);
    return 0;
}