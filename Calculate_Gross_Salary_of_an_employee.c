#include<stdio.h>
int main()
{
    float hra,da,bs,pf,gs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}