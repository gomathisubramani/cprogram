#include<stdio.h>
#include<string.h>
void main()
{
    int n,k,count=0,i,a[50];
    printf("enter the number");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            count++;
        }
    }
    printf("%d",count);
}
