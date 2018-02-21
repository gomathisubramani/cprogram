#include <stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int l,i;
	printf("\n enter the string\t");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	if((i%2)==0)
	{
		printf("%c",a[i]);
	}
	}
	printf("\t");
	for(i=0;i<l;i++)
	{
	if((i%2)!=0)
	{
		printf("%c",a[i]);
	}
	}
}
