#include<stdio.h>
void main()
{
	int l,b,h,k,n,m,t,v;
	printf("\n enter the length");
	scanf("%d",&l);
	printf("\n enter the breath");
	scanf("%d",&b);
	printf("\n enter the height");
	scanf("%d",&h);
	k=l*b;
	n=b*h;
	m=l*h;
	t=2*(k+m+n);
	v=l*b*h;
	printf("\n the surface of the cuboid is %d",t);
	printf("\n the volume of the cuboid is %d",v);
}
