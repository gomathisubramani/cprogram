#include<stdio.h>
int main()
{
    int b,min,i,g[150];
    printf("enter the number");
    scanf("%d",&b);
    min=g[0];
    printf("enter the numbers");
    for(i=0;i<b;i++)
    {
        scanf("%d",&g[i]);
        printf("\t%d",g[i]);
    }
    for(i=0;i<b;i++)
    {
    
    if(g[i]<min)
    {
        min=g[i];
    
    }
    }
    printf("the minimum number is %d",min);
    return 0;
}
