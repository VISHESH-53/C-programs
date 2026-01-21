#include <stdio.h>
#include <math.h>
int main() {
    float p,r,t,n,CI,A,SI;
    printf("ENTER PRINCIPAL AMOUNT(IN Rs):-");
    scanf("%f", &p);    
    printf("ENTER ANNUAL RATE OF INTEREST(IN PERCENTAGE):-");
    scanf("%f", &r);
    printf("ENTER TIME (IN YEARS):-");
    scanf("%f", &t);
    SI=(p*r*t)/100;
    printf("Enter the number of times the interest is compounded per year:- ");
    scanf("%f", &n);
    A = p * pow((1 + (r / (100 * n))), n * t);
    CI = A - p;
    printf("SIMPLE INTEREST IS=Rs%f\n",SI);
    printf("COMPOUND INTEREST IS=Rs%f",CI);
    return 0;
}
