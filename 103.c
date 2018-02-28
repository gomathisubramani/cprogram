#include <stdio.h>
#include<string.h>
int main()
{
	char a[40];
	int l,i;
	printf("\n enter the string");
	scanf("%[^\t\n]s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(i==0)
		{
			a[i]=a[i]-32;
		}
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
		}
	}
	printf("%s",a);
}
