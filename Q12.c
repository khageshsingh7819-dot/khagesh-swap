//Write a program to input an integer and check whether it is positive, negative or zero using if-else.
#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer:");
    scanf("%d", &num);
    if(num>0){
        printf("The number is positive.");
    }
    else if(num<0){
        printf("The number is negative.");
    }
    else{
        printf("The number is zero.");
    }
    return 0;
}