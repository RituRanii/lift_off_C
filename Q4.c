#include<stdio.h>
factorial(int n)
{
if(n==0)
return 1;
else
return(n*factorial(n-1));

}
int main()
{
    int number;
    int fact;
    printf("Enter a number:");
    scanf("%d",&number);
    fact=factorial(number);
    printf("factorial is %d %d",number,fact);
    return 0;
}
