#include<stdio.h>
int factorial();
int main()
{
   int number;
   printf("Enter a number to calculate it's factorial\n");
   scanf("%d",&number);
   printf("%d\n",factorial(number));
}
int factorial(int number)
{
  int i;
  int fact= 1;
  for (i=1;i<=number;i++)
    fact = fact*i;

  return fact;
}
