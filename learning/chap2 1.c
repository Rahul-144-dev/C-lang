#include <stdio.h>
int main()
{
    // int a = 12;
    // int b = a;
    // int c = b + 8;
    // int d = c + 3, t;
    // printf("sum is %d\n", d);

    int oldage = 12;
    int years = 34;
    int newage = oldage + years;
    printf("AGE is %d\n", newage);

    int a, b, c;
    a = b = c = 23;
    printf("sum = %d\n", a + b + c);
    printf("sum = %d\n", a + b - 3 + c);

    return 0;
}