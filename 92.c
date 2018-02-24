#include <stdio.h>
int main()
{
	int i,a,n,sum=0;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&n);
	sum=sum+n;	
	}
	printf("the addition of the number is %d",sum);
}
