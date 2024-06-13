#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    printf("Enter n : ");
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}