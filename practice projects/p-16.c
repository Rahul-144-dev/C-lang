/* Multiplication Table */
/* Print the table of a number input by the user */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }
    return 0;
}