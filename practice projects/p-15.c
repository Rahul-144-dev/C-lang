/* Print the Sum of First n Natural Numbers */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}