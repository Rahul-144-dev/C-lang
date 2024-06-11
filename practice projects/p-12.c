#include <stdio.h>
#include <math.h>
int main()
{
    char ch;
    printf("enter charecter : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("the charecter is uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("the charecter is lowercase\n");
    }
    else
    {
        printf("the charecter is not an alphabet\n");
    }
    return 0;
}
