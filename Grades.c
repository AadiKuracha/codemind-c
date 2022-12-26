#include<stdio.h>
int main()
{
    float a,b,c,d,e,x;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    x=((a+b+c+d+e)/500)*100;
    if(x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80)
    {
        printf("Grade B");
    }
    else if(x>=70)
    {
        printf("Grade C");
    }
    else if(x>=60)
    {
        printf("Grade D");
    }    
    else if(x>=40)
    {
        printf("Grade E");
    }
    else if(x<40)
    {
        printf("Grade F");
    }
}