#include <stdio.h>
int min(int a, int b) {
    return (a < b) ? a : b;
}
int gcd(int a, int b, int divisor) {
    if (a % divisor == 0 && b % divisor == 0)
        return divisor;
    else
        return gcd(a, b, divisor - 1);
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int minNum = min(num1, num2);
    int result = gcd(num1, num2, minNum);

    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
