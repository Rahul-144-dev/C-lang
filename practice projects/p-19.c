/* Print all numbers from 1 to 1O except for 6 */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        if (n == 6)
        {
            continue; /*continue is use to skip anything*/
        }
        printf("%d\n", n);
    }
    return 0;
}