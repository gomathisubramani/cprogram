#include<stdio.h>
void main()
{
    int a,b,i,d=1,sum=0,n;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the starting value");
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        sum=sum+b;
        b=b+d;
        
    }
    printf("the sum is %d",sum);
}
