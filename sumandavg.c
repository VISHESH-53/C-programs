#include <stdio.h>
int main(){
    int num1, num2,num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    int sum =num1 + num2+num3;
    printf("Sum of %d,%d and %d is: %d\n", num1, num2,num3, sum);
    int avg = sum/3;  
    printf("Average of %d,%d and %d is: %d \n",num1, num2,num3, avg);
}