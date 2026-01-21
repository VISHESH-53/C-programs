#include <stdio.h>

int main() {
    int number;
    int binary[8];

    printf("Enter a number between 0 and 255: ");
    scanf("%d", &number);

    if (number < 0 && number > 255) {
        printf("Invalid input! Please enter a number between 0 and 255.\n");
    } else {
        printf("Binary equivalent: ");
        for (int i=7;i>=0;i--) {
            binary[i]=number%2;
            number=number/2;
        }
        printf("\n");
        for (int i=0;i<=7;i++) {
            printf("%d", binary[i]);
        }
    }
    return 0;
}   