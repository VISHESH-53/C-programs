// Write a C program to find the sum of individual digits of a given positive integer. 

#include <stdio.h>

int main(){

    int num,i,n,sum;

    printf("ENTER THE NUMBER OF DIGITS IN NUMBER:-");
    scanf("%d",&n);

    printf("ENTER THE NUMBER:-");
    scanf("%d",&num);

    for(i=0;i<n;i++){
        sum+=num%10;
        num=num/10;
    }
    printf("%d",sum);
}