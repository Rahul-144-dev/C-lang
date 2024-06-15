/* Print reverse of the table for a number n */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }
    return 0;
}