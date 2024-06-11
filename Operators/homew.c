#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter the 1st number");
    scanf("%d", &a);
    printf("Enter the 2nd number");
    scanf("%d", &b);
    printf("Enter the 3rd number");
    scanf("%d", &c);
    printf("The avarage of them is %d", (a + b + c) / 3);
    return 0;
}