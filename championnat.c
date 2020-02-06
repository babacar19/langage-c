#include<stdio.h>

void journee(int n1,int pair,int n,int j,int m)
{
    int exTeam, reTeam;

    if (pair == 0)
        n1 = n;
    else
        n++;
    if (m == 1)
    {
        if (pair == 0)
            printf(" equipe qui reçoit : %d \n ",n1);
        else
            printf(" pas de match \n ");

    }

    else
    {
        exTeam = ((j +  m - 2 )%(n1 - 1)) + 1 ;
        printf(" \n equipe qui reçoit : %d \n",exTeam);
    }
    
    reTeam = (( j - m + n1 - 1 )%(n1 - 1 )) + 1;
    printf("equipe en deplacement %d \n ",reTeam);
    
}

int main()
{
    /*
    m: numero  du match
    j: numero de la journee
    n: nombre d'equipes

    */
    int n1 = 0 , n , j , m;
    
    printf(" donner le nombre d'équipes dans le championnat   ");
    scanf("%d",&n);
    printf(" donner le numero de la journee  ");
    scanf("%d",&j);
    printf("donner le numero du match  ");
    scanf("%d",&m);

    journee( n1 , n%2 , n , j , m );
    return 0;
    
}