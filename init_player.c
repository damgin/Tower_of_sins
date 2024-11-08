#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void init_player (){
    FILE * fd = fopen("Falthes.txt","r");
    char buf[255]; memset (buf, 0, 255);
     // lire la premier buf
    fgets(buf,255,fd);
    // extraire le name
    strtok(buf,"-");
    char* token = strtok(NULL,"-");
    token = &(token[1]); // remove space before name
    token[strlen(token)-1] = 0;
    // remplir le name du user
    strcpy(buf,token);
    token = &(token[1]); // remove space before name
    token[strlen(token)-1] = 0;
    // remplir le name du user
    strcpy(buf, token);
    printf ("%s\n", buf);
}

int main () {

    return 0;
}