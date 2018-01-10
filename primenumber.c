#include <stdio.h>
int main()
{
	int a,b,i,flag;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	
	while(a<b)
	{ flag=0;
		for(i=2;i<a/2;i++)
		{//flag=0;
			if(a%i==0)
			{
				flag=1;
				a++;
				break;
				
			}
			if(flag==0&&(a%2!=0))
			{
				printf(" %d",a);
				a++;
				
			}
			
		}
		
	}
	return 0;
}
