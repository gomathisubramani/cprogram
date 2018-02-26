#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("\n enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of the natural numbar is %d",sum);
    
}

