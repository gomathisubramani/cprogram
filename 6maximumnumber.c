#include<stdio.h>
int main()
{
    int c[30]={1,7,8,9,5,24,67,89,18,100},i,max;
    max=c[0];
    for(i=0;i<=10;i++)
    {
    
        if(c[i]>max)
        {
            max=c[i];
        }
    }
        printf("the maximum no is %d",c[i]);
        
    return 0;
}
