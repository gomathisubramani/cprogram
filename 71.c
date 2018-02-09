#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	int i;
	printf("enter the string");
	scanf("%s",a);
	b=strrev(a);
	if((strcmp(a,b))==0)
	{
		printf("the string is palindrome");
	}
	else
	{
		printf("the string is not palindrome");
	}
}
