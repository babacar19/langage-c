#include<stdio.h>
#include<string.h>
#include<math.h>

#define FALSE 0
#define TRUE 1


/*
code ascii de quelques caracteres:
+: 43
-: 45
*: 42
/: 47
%: 37
=: 61
*/

int verifOperateur(char c)
{
    
    switch (c)
    {
    case '+':
        return TRUE;
    case '-':
        return TRUE;
    
    
    default:
        break;
    }
    return FALSE;
}

int renvoie(char c, int a , int b)
{
    
    switch (c)
    {
    case '+':
        return a + b ;
    case '-':
        return a - b ;
        
    default:
        break;
    }
    
}


int tester_nombre(char c)
{
    int code = 0;
    code = c;

    if(code < 48 || code > 57)
        return FALSE;
    return TRUE;

}

int verifier_operation(char operation[])
{
    
    int cptCaratere = 0, taille = strlen(operation),indexOp = -1;
    
    if(tester_nombre(operation[0]) == FALSE || tester_nombre(operation[taille - 1]) == FALSE)
        return FALSE;

    for(int i = 1; i < taille; i++)
    {
        if(tester_nombre(operation[i]) == FALSE)
        {
            indexOp = i;       
            
            cptCaratere++;
        }
    if(cptCaratere >= 2 )
        return FALSE;
            
    }
    
    if( indexOp == -1 )
        return FALSE;
    
    return indexOp;
}

int calcul(char operation[], int indexOp)
{
    int taille = strlen(operation),cpt = 0, a = 0, b = 0, resultat = 0 ;

    for (int i = 0; i < taille ; i++)
    {
        if( i < indexOp)
        {
            a += pow(10,indexOp-i-1) * transcription(operation[i]);

        }

        if( i > indexOp )
        {
            b += pow(10,taille-i-1) * transcription(operation[i]);
        }

    }
    resultat = renvoie(operation[indexOp], a , b );
    return resultat;

    
}

int transcription(char c)
{
    switch (c)
    {
    case '0':
        return 0;
    case '1':
        return 1;    
    
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
     
        
    default:
        break;
    }
    return -1;

}

int main()
{

    char operation[20],c;
    int i = 0, indexOp = -1;
    printf(" entrer l' operation : ");
    while ( (c = getchar()) != '\n' )
    {
        operation[i] = c;
        i++;

    }
    printf("\n l'operation est %s ",operation);
    indexOp = verifier_operation(operation);
    
    if(indexOp == FALSE)
        printf(" l' operation saisie est incorrecte \n ");
    else
    {
        if(verifOperateur(operation[indexOp]) == FALSE)
            printf(" l' operation saisie est incorrecte \n ");
        else
        {
            int resultat = calcul(operation , indexOp);
            printf(" \n le resultat est %d  ",resultat );
    
        }
        
        
    }
       

    

    return 0;

}
