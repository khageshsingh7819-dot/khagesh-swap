//Write a program to convert temperature from celcius to fahrenheit
#include<stdio.h>
int main (){
    float celcius, farenheit;
    printf("Enter temperature in celcius: ");
    scanf("%f",&celcius);
    farenheit = (celcius * 9/5) + 32;
    printf("Temperature in fahrenheit: %.2f", farenheit);
    return 0;
}