#include <stdio.h>
int main() {
    int intNum;
    float floatNum;
    char charVal;
    printf("Enter an integer: ");
    scanf("%d", &intNum);
    printf("Enter a float: ");
    scanf("%f", &floatNum);
    printf("Enter a character: ");
    scanf(" %c", &charVal);
    float autoConversion = intNum;
    printf("\nImplicit Conversion: int (%d) to float: %f\n", intNum, autoConversion);
    int castedInt = (int) floatNum;
    printf("Explicit Conversion: float (%f) to int: %d\n", floatNum, castedInt);
    int asciiVal = (int) charVal;
    printf("Explicit Conversion: char ('%c') to ASCII value: %d\n", charVal, asciiVal);
    return 0;
}