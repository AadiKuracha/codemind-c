#include<stdio.h>
int main()
{
    int m,r=0,x,n;
    scanf("%d",&m);
    n=m;
    while(m>0)
    {
        x=m%10;
        r=r*10+x;
        m=m/10;
    }
    if(r==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}