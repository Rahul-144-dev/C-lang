#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    printf("Enter n : ");
    scanf("%d", &n);
    // for ( i = 0; i <= n; i++)
    // {
    //     printf("%d,", i);
    // }
    i = 0;
    while (i <= n)
    {
        printf("%d,", i);
        i++;
    }

    return 0;
}