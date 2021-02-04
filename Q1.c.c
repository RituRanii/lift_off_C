#include<stdio.h>
int main()
{
    float a,b,sum,diff,mul,div;
    printf("Enter two numbers\n");
    scanf("%f%f",&a,&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    printf("Addition is %f\n",sum);
    printf("Subtraction is %f\n",diff);
    printf("Multiplication is %f\n",mul);
    printf("Division is %f\n",div);
    return 0;
}
