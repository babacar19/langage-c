#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    
    const char* chemin = "./lien_calcul";
    int fd = open(chemin,O_RDONLY);
    printf(" %d \n ",fd);
    // On lit deux fois le meme fichier pour la question 4
    int fd2 = open(chemin,O_RDONLY);
    printf(" %d \n ",fd2);
    

}