#include<stdio.h>
int main()
{
int i,n,range;
printf("enter the integer");
scanf("%d",&n);
printf("enter the range");
scanf("%d",&range);
for(i=1;i<=range;++i)
{
printf("%d*%d=%d",n,i,n*i);
}
return 0;
}
