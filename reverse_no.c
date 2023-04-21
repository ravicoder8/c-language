#include <stdio.h>

int main()
{
  int number, remainder;
  int reverse = 0;

  printf("enter a number\n");
  scanf("%d", &number);
  while (number != 0)
  {

    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    number = number / 10;
  }

  printf("%d", reverse);
  return 0;
}