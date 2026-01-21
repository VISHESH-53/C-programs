// Write a C program to find the sum of individual digits of a positive integer and test 
// given number is palindrome

#include <stdio.h>
int main(){
    int num, sum=0,reverse = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int onum=num;
    while(num != 0){
        sum += num%10;
        num /= 10;
    }
    printf("Sum of individual digits: %d\n", sum);
    int temp=onum;
    while(onum!=0){
        reverse = reverse*10 + onum%10;
        onum /= 10;
    }
    if(temp == reverse){
        printf("The number is a palindrome.\n");
    }
    

}
