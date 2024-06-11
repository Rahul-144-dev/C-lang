#include <stdio.h>
#include <math.h>
int main()
{
    int numb;
    printf("Enter your number : ");
    scanf("%d", &numb);
    if (numb <= 100, numb >= 91)
    {
        printf("A+");
    }
    else if (numb <= 90, numb >= 81)
    {
        printf("A");
    }
    else if (numb <= 80 , numb >= 71)
    {
        printf("B+");
    }
    else if (numb <= 70, numb >= 61)
    {
        printf("B");
    }
    else if (numb <= 60, numb >= 51)
    {
        printf("C+");
    }
    else if (numb <= 50, numb >= 41)
    {
        printf("C+");
    }
    else if (numb <= 40, numb >= 26)
    {
        printf("D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}