#include <stdio.h>
int main() {
    int num1 = 01;
    int num2 = 10;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (float)num1 / num2;
    printf("T?ng c?a %d v� %d l� %d\n", num1, num2, sum);
    printf("Hi?u c?a %d v� %d l� %d\n", num1, num2, difference);
    printf("T�ch c?a %d v� %d l� %d\n", num1, num2, product);
    printf("Th��ng c?a %d v� %d l� %.2f\n", num1, num2, quotient);
    return 0;
}
