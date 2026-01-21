// Write a C program, which takes two integer operands and one operator from the
// user,performs the operation and then prints the result.

#include <stdio.h>

int main(){
    int int_a,int_b;
    float a,b,c;
    char o;

    
    printf("Enter first number:-");
    scanf("%f",&a);

    printf("Enter second number:-");
    scanf("%f",&b);

    printf("Enter operator");
    scanf(" %c",&o);

    switch (o) {

        case '+':
        c=a+b;
        printf("%f",c);
        break;

        case '-':
        c=a-b;
        printf("%f",c);
        break;

        case '*':
        c=a*b;
        printf("%f",c);
        break;

        case '/':
        c=a/b;
        printf("%f",c);
        break;

        case '%':
        int_a = (int)a;
        int_b = (int)b;
            if (int_b != 0) {
                printf("Result: %d\n", int_a % int_b);
            } else {
                printf("Error: Division by zero in modulo!\n");
            }
        break;

            
        
    }

}