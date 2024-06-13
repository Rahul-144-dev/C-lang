#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
        }
    printf("%d\n", sum);
    return 0;
}