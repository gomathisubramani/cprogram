#include<stdio.h>
void main()
{
    int b,i,flag=0;
    printf("enter the number");
    scanf("%d",&b);
    for(i=2;i<b/2;i++)
    {
        if((b%i)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("prime no");
    }
    else
    {
        printf("not prime");
    }
}
