#include<stdio.h>

int main()
{
    int tailleInt = sizeof(int),
        tailleChar = sizeof(char),
        tailleFloat = sizeof(float),
        tailleDouble = sizeof(double);


    printf(" int: %d , float: %d, char: %d, double: %d \n",tailleInt,tailleFloat,tailleChar,tailleDouble);
    return 0;

}
