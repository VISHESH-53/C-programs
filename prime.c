// Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.
#include <stdio.h>
int main(){
    int n,i,j,check;
    printf("Enter the nth number");
    scanf("%d",&n);
    for( i=2;i<=n;i++){
        check=1;
        printf("%d",i/2);
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                check=0;
                break;
            }
        }
        if(check==1){
            printf("%d\t",i);
        }
    }
}
    