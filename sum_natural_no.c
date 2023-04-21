#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("enter a number");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;

        i = i + 1;
    }
    printf(" sum is %d\n", sum);
    return 0;
}