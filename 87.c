#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	if((a%b)==0&&(b%a)!=0)
	{
		printf("the GCD is %d",b);
	}
	else
	{
		printf("the GCD is %d",a);
	}
}
