#include<stdio.h>
int main()
{
    int b,min,i,a[150];
    printf("enter the number");
    scanf("%d",&b);
    min=a[0];
    printf("enter the numbers");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        printf("\t%d",a[i]);
    }
    for(i=0;i<b;i++)
    {
    
    if(a[i]<min)
    {
        min=a[i];
    
    }
    }
    printf("the minimum number is %d",min);
    return 0;
}
