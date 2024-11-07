#include <stdio.h>
#include <string.h>

#define MAX 255

void entername(char* buffer){

    memset(buffer,0,MAX);
    fgets(buffer,MAX,stdin);
    buffer[strlen(buffer)-1]=0;
    


};
int main(){
char buffer[MAX];

    printf("Entrez nom du joueur \n");
    entername(buffer);

    printf("A vous de jouer %s !! \n",buffer);
    return 0;
}
