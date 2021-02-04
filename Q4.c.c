#include <stdio.h>

int main()
{
float phy,chem,bio,math,comp,perc;
printf("Enter marks for 5 subjects:");
scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
perc=(phy+chem+bio+math+comp)/5;
printf("percentage=%f\n",perc);
if(perc>=90)
{
    printf("Grade A");
}
else if(perc>=80)
{
    printf("Grade B");
}
else if(perc>=70)
{
    printf("Grade C");
}
else if(perc>=60)
{
    printf("Grade D");
}
else if(perc>=40)
{
    printf("Grade E");
}
else
{
    printf("Grade F");
}
return 0;
}
