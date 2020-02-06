#include<stdio.h>

int main()
{
    char caractere;
    int code = 0;
    printf( " entrer un caractere ");
    scanf("%c",&caractere);
    code = caractere;
    printf(" le code ascii en decimal est %d et celui en hexa %x \n ",code,code);

    return 0;

}