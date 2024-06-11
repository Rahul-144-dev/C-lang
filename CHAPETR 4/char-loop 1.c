#include <stdio.h>
#include <math.h>
int main()
{
    float i;
    for (i = 1.0; i <= 5.0; i++)
    {
        printf("%f\n", i);
    }
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c,", ch);
        
    }

    return 0;
}