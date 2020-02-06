#include<stdio.h>
#include<math.h>


void prendreCoord(float *x, float *y)
{
    float x1,y1;
    
    printf(" Donner les coordonnees de x : ");
    scanf("%f%f",&x1,&y1);
    *x = x1;
    *y = y1;
}

float dist(float x1,float x2, float y1, float y2)
{
    
    return sqrt(pow(x2 - x1, 2 ) + pow(y2 - y1, 2));
}

int main()
{
    float x1,x2,y1,y2,resultat;

    prendreCoord(&x1,&y1);
    prendreCoord(&x2,&y2);
    resultat = dist(x1,x2,y1,y2);
    printf(" la distance entre les deux points est de %.2f  \n ",resultat);
           

}