#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int b;
	printf("enter the string");
	scanf("%s",a);
	b=strlen(a);
	if((b%2)==0)
	{
		printf(a(b/2)='*');
		printf(a(b/2)-1='*');
	}
	else
	{
		printf(a(b/2)='*');
	}
}
