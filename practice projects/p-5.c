#include <stdio.h>
#include <math.h>
int main()
{
    // even = 1;
    // odd = 0;
    int numb;
    printf("Enter the number");
    scanf("%d", &numb);
    printf("answer is %d", numb % 2 == 0);
    return 0;
}