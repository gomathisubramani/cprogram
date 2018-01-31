#include<stdio.h>
void ascending();
void main()
{
	ascending();
}
void ascending()
{
	int i,j,a[20],t,n,k,h;
	printf("enter the element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	k=n/2;
	if((n%2)==0)
	{
	    h=k+1;
	    printf("the median element is %d",a[h]);
	}
	else
	{
	    printf("the median element is %d",a[k+1]);
	}
}
	
    
	
