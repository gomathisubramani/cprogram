#include<stdio.h>
int main()
{
int n1,n2,n3;
scanf("%d %d %d",&n1,&n2,&n3);
if(n1>n2&&n1>n3)
{
printf("the number n1 is large");
}
if(n2>n1&&n2>n3)
{
printf("the number n2 is large");
}
if(n3>n1&&n3>n2)
{
printf("the number n3 is large");
}
return 0;
}
