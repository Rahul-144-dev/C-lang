#include <stdio.h>
#include <math.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    age >= 18 ? printf("you are an adult\n") : printf("you are an minor");
    return 0;
}