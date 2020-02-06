#include<stdio.h>
#include<string.h>

int main()
{
    char caracteres[10];
    int code = 0, test = 0, taille = 0;
    printf(" entrer des caracteres:  ");
    scanf("%s",caracteres);
    taille = strlen(caracteres);
    for (int i = 0; i < taille ; i++)
    {
        code = caracteres[i];
        if ( code < 49 || code > 57)
        {
            printf("vous n avez pas entré un nombre \n");
            test = 1;
            break;
        }

    }
    if ( test != 1 )
        printf("vous avez bien entré un nombre \n ");
    
    return 0;
    
}