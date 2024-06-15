/* Write a program to check if a number is prime or not */
#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // printf("enter number : ");
        // scanf("%d", &n);
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime\n");
    }
    else
    {
        printf("non-prime\n");
    }

    return 0;
}