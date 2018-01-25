#include <stdio.h>

int main(void) {
	int c,d;
	char a[50]="quick",b[45]="leaner";
	c=strlen(a);
	d=strlen(b);
	if(c>d)
	{
		printf("%s",a);
	}
	else if(c<d)
	{
		printf("%s",b);
	}
	else
	{
		printf("%s",a);
	}
	return 0;
}
