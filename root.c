// Write a C program to find the roots of a Quadratic equation. 

#include <stdio.h>
#include <math.h>


int main(){
    int a,b,c,det;

    printf("Enter the value of a if quadratic equation is 'a(x^2)+bx+c':-");
    scanf("%d",&a);

    printf("Enter the value of b if quadratic equation is 'a(x^2)+bx+c':-");
    scanf("%d",&b);

    printf("Enter the value of c if quadratic equation is 'a(x^2)+bx+c':-");
    scanf("%d",&c);

    det=(b*b)-(4*a*c);


    if(det<=0){
        printf("No real roots exist");
    }

    else{
        float r1=(-b+sqrt(det))/(2*a);
        float r2=(-b-sqrt(det))/(2*a);
        printf("The roots of equation is%f\t%f",r1,r2);        
    }
}