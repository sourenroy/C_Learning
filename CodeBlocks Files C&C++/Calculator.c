#include <stdio.h>
// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);
int main() {
int num1, num2, choice;
float result;
do
{
// Menu display
printf("Simple Calculator\n");
printf("------------------\n");
printf("1. Addition (+)\n");
printf("2. Subtraction (-)\n");
printf("3. Multiplication (*)\n");
printf("4. Division (/)\n");
printf("5. Modulus (%%)\n");
printf("6. exit\n");
printf("Enter your choice (1-6): ");
scanf("%d", &choice);
// Input two integers
// Perform operation based on choice
switch (choice) {
case 1:printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);
result = add(num1, num2);
printf("Result = %d\n", (int)result);
break;
case 2:printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);
result = subtract(num1, num2);
printf("Result = %d\n", (int)result);
break;
case 3:printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);
result = multiply(num1, num2);
printf("Result = %d\n", (int)result);
break;
case 4:printf("Enter two integers: ");

scanf("%d %d", &num1, &num2);
if (num2 == 0)
printf("Error: Division by zero is not allowed.\n");
else {
result = divide(num1, num2);
printf("Result = %.2f\n", result);
}
break;
case 5:printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);
if (num2 == 0)
printf("Error: Modulus by zero is not allowed.\n");
else {
result = modulus(num1, num2);
printf("Result = %d\n", (int)result);
}
break;
case 6:printf("you choose to exit. terminating the programme!!");
//exit(0);
default:
printf("Invalid choice.\n");
}
}while(choice!=6);
return 0;
}
// Function definitions
int add(int a, int b) {
return a + b;
}
int subtract(int a, int b) {
return a - b;
}
int multiply(int a, int b) {
return a * b;
}
float divide(int a, int b) {
return (float)a / b;
}
int modulus(int a, int b) {
return a % b;
}
