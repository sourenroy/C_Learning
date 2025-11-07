//Q. Fibonacci series using recursion

#include <stdio.h>
int fib(int n)
{
    if (n == 0)
return 0;
    if (n == 1 || n == 2)
return 1;
else
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&n);

    printf("Fibonacci series of %d numbers is: ",n);

for (int i = 0; i < n; i++)
{
    printf("%d ", fib(i));
}
    return 0;
}
