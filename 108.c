#include <stdio.h>
int main()
{
	int a,sum=0,d,i,b,k;
	printf("\n enter the frt number");
	scanf("%d",&a);
	printf("\n enter the difference");
	scanf("%d",&d);
	printf("\n enter the total number");
	scanf("%d",&b);
	k=a;
	for(i=1;i<=b;i++)
	{
	sum=sum+k;
	k=k+d;
	}
	printf("%d",sum);
}
