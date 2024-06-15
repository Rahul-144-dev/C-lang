/* Calculate the sum of all numbers between 5 and 50 (including 5 & 50) */
#include <stdio.h>
#include <math.h>
int main()
{
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}