#include<stdio.h>

int main()
{
    int a,b,q1,reste;
    float q2;

    printf(" donner le diviseur : ");
    scanf("%d",&a);
    printf(" donner le dividende : ");
    scanf("%d",&b);
    reste = a % b;
    q1 = a/b;
    q2 =(float) a/b;
    printf("Le quotient de la division entiere est égal à %d , le reste %d et le quotient de la division reelle %f \n",q1,reste,q2);

}