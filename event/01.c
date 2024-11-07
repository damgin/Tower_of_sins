
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "C:\Users\ant97\Desktop\TOWER_OF_SINS\Tower_of_sins\personnages\ennemies\garde_des_limbes.c"

#define choix1 1
#define choix2 2
#define choix3 3
#define QUITTER 0

void MAJtoMIN(char input[], char output[]){         ////// REVOIR LES CHAR

    for(int i = 0; i < strlen(input);i++){    ///parcour ma chaine de caractere
        intput[i];
        if(input[i] > 96){ //// TARGET MIN
            input[i]-32;
        }
        if(input[i] < 91){ //// TARGET MAJ
            input[i]+32;
        }
    }
}

// Fonction pour convertir la saisie en choix
int convertirSaisie(char *saisie) {
    MAJtoMIN(saisie);
    if (estEgal(saisie, "1\n") || estEgal(saisie, "continuer\n") || estEgal(saisie, "continue\n")) return choix1;
    if (estEgal(saisie, "porte\n") || estEgal(saisie, "2\n") || estEgal(saisie, "entrer\n")) return choix2;
    if (estEgal(saisie, "\n") || estEgal(saisie, "\n") || estEgal(saisie, "\n")) return choix3;

    if (estEgal(saisie, "Q\n") || estEgal(saisie, "q\n") || estEgal(saisie, "0\n")) return QUITTER;
    return -1;  // problème 
}
int main(){

    char buf[255];

    memset(buf,0,255);

    buf[strlen(buf)-1]=0;

    printf("Après avoir exploré un long couloir peu éclairé, vous croisez une lourde porte en chène\n");
    printf("que faite vous ?\n");
    printf("1/ continuer votre chemin\n");
    printf("2/ entrer dans la pièce\n");

    fgets(buf,255,stdin);
    convertirSaisie(buf);
    if(choix1){
        
        continue;

    }else if(choix2){

        printf("Vous entrée dans la pièce, vous distinguer une lumière diffuse au millieu d'une nape de brouillard.\n");
        printf("l'air vous semble nosée a bonde??, sous vos pied le sol est tacher d'un sang froid et épais.\n");
        printf("vous rencontrer une coatrix, préparer vous au combat!\n");
        personnage garde
        spawn_garde_des_limbes()
        //fonctioncombat
    }

  
}