#include<stdio.h>
int main()
{
	int a,b,i,sum=0,d,k;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	k=a,b;
	for(i=a;i<=b;i++)
	{
		while((a!=0)&&(b!=0))
		
		{
		    d=k%10;
		    sum=sum+d*d*d;
		    k=k/10;
			
		}
		printf("%d",i);
		
	}
}
