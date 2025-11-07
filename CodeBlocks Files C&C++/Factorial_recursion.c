/*Q. Finding factorial of a given number using recursion*/
#include <stdio.h>
// Recursive for to calculate factorial
int factorial(int n) {

if (n == 0 || n == 1) {
    return 1; // Base case
} else {
    return n * factorial(n - 1); // Recursive step
}
}
int main() {
int num;
    printf("Enter a number: ");
    scanf("%d", &num);

if (num < 0) {
    printf("Factorial is not defined for negative numbers.\n");
} else {
    printf("Factorial of %d is %d\n", num, factorial(num));
}
return 0;
}
