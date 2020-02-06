#include<stdio.h>
#include<math.h>

float discriminant(float a,float b, float c)
{
    
    return  pow(b,2) - 4*a*c; 
}

float prendreCoefficient(int degre)
{
    float coeff;

    printf(" donnner le coefficient du monome de degré %d ",degre);
    scanf("%f",&coeff);

    return coeff;
}


int main()
{
    float a,b,c,delta;

    a = prendreCoefficient(2);
    b = prendreCoefficient(1);
    c = prendreCoefficient(0);

    delta = discriminant(a,b,c);

    
    if (delta >= 0)
        {
            float x1 = (-b - sqrt(delta))*0.5;
            float x2 = (-b + sqrt(delta))*0.5;
            printf("\n L'equation admet deux soltions: %.2f et %.2f ",x1,x2);
            
        }
    
    if (delta < 0)
        printf("\n L'équation n'admet pas de solution \n ");
                
    return 0;
    
}

