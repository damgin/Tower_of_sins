#include<stdio.h>
#include <string.h>

int main(){

FILE* fichier = fopen("Player_stats","r+");

    // lire le fichier ligne par ligne
    // si 
    char buff[255];
    memset(buff,0,255);
while (fgets(buff,255,fichier)!=NULL)
{
    printf("%s",buff);
}
// while (buff != EOF)
// {
    

//     fgets(buff,255,fichier);
//     buff[strlen(buff)-1]=0;

//     // strtok(buff,"\n");
//     // char* token  = strtok(NULL,"\n");
//     // token = &(token[1]);

//     printf("%s ",buff);
//     // printf("%s\n",token);
// }




    return 0;
}