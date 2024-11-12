#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "personnage.c"
#include "Player_stats"

player get_player(){

    player personnage;

    FILE* fichier = fopen("Player_stats","r+");

    // lire le fichier ligne par ligne
    // si 


    char buff[255];
    fgets(buff,0,fichier);

       printf("%s\n",buff);

    // strcpy(personnage.nom, );
    // personnage.pv_max = ;
    // personnage.pv_actuel = ;
    // personnage.degat = ;
    // personnage.endurance =;
    // personnage.morale = ;


    // fseek(fichier,0,SEEK_SET);
    fclose(fichier);

    return personnage;


};