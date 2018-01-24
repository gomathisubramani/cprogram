#include<stdio.h>
int main()
{
    int max,min,a[50],i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    min=max=a[0];
    for(i=0;i<=n;i++)
    {
        if(a[i]>=max)
        max=a[i];
    
    else
    
        min=a[i];
    }
    printf("%d%d",max,min);
}
