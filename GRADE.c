#include <stdio.h>
int main(){
    float m;
    printf("Enter your marks:-");
    scanf("%f", &m);

    if (m >=70 ){
        printf("Distinction");
    }
    if (m >=60 and m <70){
        printf("First class");
    }
    if (m >=40 and m<60){
        printf("Second class");
    }
    else{
        printf("Failed");
    }
    return 0;
}   