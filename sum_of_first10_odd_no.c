#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while (i <= 20)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
           
        }
         i++;
    }
    printf(" sum of first 10 odd no = %d\n", sum);

    return 0;
}