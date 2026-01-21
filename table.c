#include <stdio.h>

int main() {
    int num,row;
    printf("Enter the number:-");
    scanf("%d",&num);
    printf("Enter the number of rows:-");
    scanf("%d",&row);
    for(int i=1;i<row+1;i++){
        printf("%d x %d =%d\n",num,i,num*i);
    }
    return 0;
}