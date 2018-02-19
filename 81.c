#include <stdio.h>
int main()
{
	int a,b[50],c[40],i;
	printf("enter the lines");
	scanf("%d",&a);
	printf("enter the two ranges");
	for(i=0;i<a;i++)
	{
		scanf("%d%d",&b[i],&c[i]);
	}
	printf("the difference of two range");
	for(i=0;i<a;i++)
	{
		printf("%d\n",b[i]-c[i]);
	}
}
