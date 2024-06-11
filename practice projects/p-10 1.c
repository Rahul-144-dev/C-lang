#include <stdio.h>
#include <math.h>
int main()
{
    int marks;
    printf("enter your number");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("you got A+");
    }
    else if (marks >= 70 && marks <= 90)
    {
        printf("you got A");
    }
    else if (marks >= 30 && marks <= 70)
    {
        printf("you got b");
    }
    else if (marks < 30 || marks >= 0)
    {
        printf("you got fail");
    }
    else
    {
        printf("out of range");
    }
    return 0;
}