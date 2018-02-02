#include<stdio.h>
void main()
{
    int a[10],b,i;
    printf("enter the number");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        printf("%d\t%d\n",a[i],i);
    }
    
}
