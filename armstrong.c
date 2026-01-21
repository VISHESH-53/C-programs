// Write a C program to check whether given number is Armstrong Number or not. 

#include <stdio.h>
#include <math.h>

int main() {
    int num, n = 0, rem, onum;
    double cal =0;
                                          
    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);

    onum = num;

    while (onum != 0) {
        onum /= 10;
        n++;
    }
    onum = num;
    while (onum != 0) {
        rem = onum % 10;
        cal += pow(rem,n);
        onum /= 10;
    }
    if (cal == num) {
        printf("THE NUMBER IS AN ARMSTRONG NUMBER.\n");
    } else {
        printf("THE NUMBER IS NOT AN ARMSTRONG NUMBER.\n");
    }

    return 0;
}
