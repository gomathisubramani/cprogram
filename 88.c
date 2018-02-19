#include<stdio.h>
int main()
{
	int a,b,c,i,g;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if((a%i)==0&&(b%i)==0)
		{
			g=i;
		}
	}
	c=(a*b)/g;
	printf("the LCM is %d",c);
	
	
	
}
