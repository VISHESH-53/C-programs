// Write a C program to check whether given number is strong number or not.

#include <stdio.h>

int main() {
    int num, i, onum, rem, fctr, sum = 0;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);

    onum = num;

    while (onum != 0) {
        rem = onum % 10;
        fctr = 1;

        for (i = 1; i <= rem; i++) {
            fctr *= i;
        }

        sum += fctr;
        onum /= 10;
    }

    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
   