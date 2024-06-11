#include <stdio.h>
#include <math.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    if (age >= 18)

    {
        printf("Adult-");
        printf("they are adults so they are not under anyone\n");
    }
    else if (age >= 13 && age < 18)
    {
        printf("you are a teenager");
    }
    else
    {
        printf("Minor-");
        printf("they are monir so they are under their parents\n");
    }

    // age >= 18 ? printf("Adult\n") : printf("Minor\n");/*short mode*/
    return 0;
}