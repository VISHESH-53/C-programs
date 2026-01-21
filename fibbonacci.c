// A Fibonacci sequence is defined as follows: the first and second terms in the sequence 
// are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence. 
// Write a C program to generate the first n terms of the sequence. 

#include <stdio.h>

int main(){

    int n,t1=0,t2=1,i,nt;
    
    printf("Enter the number of terms:-");
    scanf("%d",&n);
    printf("%d\t%d\t",t1,t2);

    for(i=3;i<=n;i++){

        nt=t1+t2;
        t1=t2;
        t2=nt;
        printf("%d\t",nt);
        
    }
}
