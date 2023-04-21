#include <stdio.h>
int main()
{
    int a, b, sum, multiply, subtract;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a number");
    scanf("%d", &b);

    if (a % 2 == 0 &&b%2==0)
    {
        multiply = a * b;
        printf("multiply=%d", multiply);
    }
      else if (a % 2 != 0 && b%2!=0)
    {

        sum = a + b;
        printf("sum=%d", sum);
    }
    else
    {
        subtract = a - b;
        printf("subtract=%d", subtract);
    }
    return 0;
}