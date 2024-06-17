/* Write a function that prints Namaste if user is Indian & Bonjour if the user is French */
#include <stdio.h>
#include <math.h>
void ind(), fre();
int main()
{
    char n;
    printf("your nation india or french : ");
    scanf("%c", &n);
    if (n == 'i')
    {
        ind();
    }
    else if (n == 'f')
    {
        fre();
    }

    return 0;
}
void ind()
{
    printf("Namaste");
}
void fre()
{
    printf("Bonjour");
}