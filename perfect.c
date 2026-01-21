
// Write a C program to check whether given number is perfect number or not.

#include <stdio.h>

int main(){

    int num,i,ctr;
    printf("ENTER THE NUMBER:-");
    scanf("%d",&num);

    for (i=1;i<num;i++){

        if(num%i==0){
            ctr+=i;
        }
    }
    
    if (num==ctr){
        printf("Number is perfect number.");
    }
    else{
        printf("Number is not a perfect number");
    }
}