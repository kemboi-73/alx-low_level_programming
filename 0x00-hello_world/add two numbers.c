#include <stdio.h>
int main() {
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Sum: %.2lf\n", num1 + num2);
    return 0;
}
