#include<stdio.h>
#include<dirent.h>

int main()
{
    DIR *dirp;
    struct dirent *dptr;

    if((dir = opendir("rep"))==NULL)
    {
        printf("Error ");
        return -1;

    }
    while (dptr == readdir(dirp))
    {
        printf("%s \n",dptr-d_name)
    }
    

}