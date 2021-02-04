#include<stdio.h>
int main()
{
    float rad,dia,circm,area;
    printf("Enter the radius of circle:");
    scanf("%f",&rad);
    dia=2*rad;
    printf("diameter=%f\n",dia);
    circm=6.28*rad;
    printf("circumference=%f\n",circm);
    area=3.14*rad*rad;
    printf("area=%f\n",area);
    return 0;
}
