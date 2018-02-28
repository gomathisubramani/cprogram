#include<stdio.h>
#include<string.h>
void main()
{
    int n,k,count=0,i,h[50];
    printf("enter the number");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
    }
    printf("%d",h[k-1]);

}
