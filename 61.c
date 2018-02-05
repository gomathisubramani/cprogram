#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[90];
	int r,i;
	printf("enter the string");
	scanf("%s",a);
	printf("enter the values");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		b[i]=a[i];
	}
	printf("%s",b);
	return 0;
}
