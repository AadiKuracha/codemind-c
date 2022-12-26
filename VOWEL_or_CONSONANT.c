#include<stdio.h>
int main()
{
    char v;
    scanf("%c",&v);
    if(v=='a' || v=='e' || v=='i' || v=='o' || v=='u' || v=='A' || v=='E' || v=='I' || v=='O' || v=='U')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}