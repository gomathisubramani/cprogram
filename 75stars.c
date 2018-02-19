#include <stdio.h>
#include<string.h>
int main()
{
	char a[100],c;
	int b;
	printf("enter the string");
	scanf("%s",a);
	b=strlen(a);
	c=b/2;
	a[c]='*';
	printf("the string is %s",a);
}
