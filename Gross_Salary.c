#include<stdio.h>
int main()
{
    int da,hra,bs;
    float gs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        hra=0.8*bs;
        da=0.2*bs;
    }
    else if(bs<=20000)
    {
        hra=0.9*bs;
        da=0.25*bs;
    }
    else if(bs>20000)
    {
        hra=0.95*bs;
        da=0.3*bs;
    }
    gs=da+hra+bs;
    printf("%.2f",gs);
}