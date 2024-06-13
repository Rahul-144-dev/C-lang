#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    do
    {
        printf("enter n : ");
        scanf("%d", &n);
        printf("this is an eve number %d\n", n);
        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("you have enter a odd number(%d)", n);

    return 0;
}