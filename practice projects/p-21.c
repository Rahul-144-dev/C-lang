/* Print the factorial of a number n */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("%d\n", factorial);
    return 0;
}