#include<stdio.h>
void area(int);
int perimeter(int);
void main()
{
    int a=5;
    area(a);
    perimeter(a);
    
}
void area(int a)
{  int b;
   b=3.14*a*a;
   printf("area of circle %d",b);
}
int perimeter(int a)
{   int c; 
    c=2*3.14*a;
    printf("perimeter of the circle %d",c);
}
