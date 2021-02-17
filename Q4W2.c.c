#include<stdio.h>
int main()
{
    int a[100],n,i,large,small;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
for(i=0;i<n;++i)
scanf("%d",&a[i]);

        large=small=a[0];
        for(i=1;i<n;++i)
                    {
            if(a[i]<small)
            small=a[i];
if(a[i]>large)
                large=a[i];

        }
        printf("Smallest element is:%d",small);
        printf("Largest element is:%d",large);

        return 0;
}
