#include <stdio.h>
#include <math.h>
int main()
{
    // int sunday = 1;
    // int snowing = 1;
    // int monday = 1;
    // int raining = 0;
    // printf("%d\n%d\n", sunday && snowing, monday || raining);
    int x;
    printf("Enter the number :");
    scanf("%d", &x);
    printf("%d\n", x > 9 && x < 100);
    return 0;
}