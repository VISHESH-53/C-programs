#include <stdio.h>
int main(){
    int max,min,sum=0,i,x;
    printf("ENTER THE NUMBER OF NUMBER IN ARRAY:- ");
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++){
        printf("Enter the number for %d index:- ",i);
        scanf("%d",&a[i]);
    }
    
    max=a[0];
    min=a[0];
    for(i=0;i<x;i++){
        sum=sum+a[i];
        if (a[i]> max){
            max=a[i];
        }
        else{
            min=a[i];
        }
    }
    float avg=sum/x;
    printf("Max=%d\nMin=%d\nAvg=%f",max,min,avg);

}