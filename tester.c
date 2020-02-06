#include<stdio.h>

void tess(int t[])
{
    t[1]=10;
}
int main()
{
    int t= 1;
    t= (t<<3)|1;
    printf("%d \n",t);
    return 0;
}