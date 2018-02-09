#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
	b=a%10;
	if((b%2)!=0)
	printf("odd number is %d",a);
	a=a/10;
	}
	return 0;
	
}
