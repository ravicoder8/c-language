#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d even number\n", i);
        }

        else
            printf("%d odd number\n", i);
        
    }
    return 0;
}