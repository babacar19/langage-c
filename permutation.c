#include<stdio.h>
int prendreValeur()
{
    int x;
    printf(" Donner un entier : ");
    scanf("%d",&x);
    return x;
}

void permute(int *a, int *b, int *c)
{
    int d = *a;
    *a = *b;
    *b = *c;
    *c = d;

}

int main()
{
    int a,b,c;
    
    a = prendreValeur();
    b = prendreValeur();
    c = prendreValeur();
    permute(&a,&b,&c);
    printf(" a = %d et b = %d et c = %d \n",a,b,c);
}