#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    do
    {
        printf("enter n : ");
        scanf("%d", &n);
        printf("this number can't divided by 7 (%d)\n", n);
        if (n % 7 == 0)
        {
            break;
        }
    } while (1);
    printf("you have enter a number that can be divided by 7");
    return 0;
}