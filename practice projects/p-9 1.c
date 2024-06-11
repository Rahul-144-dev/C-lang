#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    printf("Enter the number(0-100) : ");
    scanf("%d", &number);

    if (number >= 0 && number <= 30)
    {
        printf("fail\n");
    }
    else if (number > 30 && number <= 100)
    {
        printf("pass\n");
    }
    else
    {
        printf("out of range");
    }

    // (number<=30)?printf("fail\n"):printf("pass\n");

    return 0;
}