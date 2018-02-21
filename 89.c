#include<stdio.h>
void main()
{
	int i,j,a[20],t,n;
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
	printf("the sorted element are");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
