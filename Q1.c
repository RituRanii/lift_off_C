#include <stdio.h>
float square();
int main()
{
    printf("calculate area of a square:");
    float area= square();
    printf("The area of square is%f",area);
}
    float square()
    {
        float side;
        printf(" The value of sides is:");
        scanf("%f",&side);
        return side*side;
    }
