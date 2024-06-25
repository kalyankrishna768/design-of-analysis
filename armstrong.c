#include <stdio.h>
#include <math.h>
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}
int countDigits(int number) {
    if (number == 0)
        return 0;
    return 1 + countDigits(number / 10);
}
int isArmstrong(int number, int n) {
    if (number == 0)
        return 0;
    return pow(number % 10, n) + isArmstrong(number / 10, n);
}
int main() {
    int num, numDigits, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    numDigits = countDigits(num);

    sum = isArmstrong(num, numDigits);

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
