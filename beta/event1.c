#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PASSER 1
#define ENTRER 2
#define QUITTER 0

// #include "personnage.c"


typedef struct CapaciteSpeciale{  
    char nom[30];
    int puissance;
    int cout_endurance;
} CapaciteSpeciale;

typedef struct Equipement{
    char nom[30];
    int effet_pv;
    int effet_endurance;
    int effet_morale;
} Equipement;

typedef struct Personnage{
    char nom[30];
    char classe[20];
    int pv_max;
    int pv_actuel;
    int degat;
    int endurance;
    int morale;
    CapaciteSpeciale capacite;
    Equipement inventaire[10];
    int nb_objets_inventaire;
} player;



void statsplayer(){

    player personnage;

    strcpy(personnage.nom, "Falthes");
    strcpy(personnage.classe, "Soldat");
    personnage.pv_max = 100;
    personnage.pv_actuel = 100;
    personnage.degat = 20;
    personnage.endurance = 80;
    personnage.morale = 60;


    // printf("%s\n",personnage.nom);

    FILE* fichier = fopen("stats","w+");
    
    

    fprintf(fichier,"Personnage nom : %s\n",personnage.nom);
    fprintf(fichier,"Personnage classe : %s\n",personnage.classe);
    fprintf(fichier,"Personnage pv_MAX : %d\n",personnage.pv_max);
    fprintf(fichier,"Personnage pv_actuel : %d\n",personnage.pv_actuel);
    fprintf(fichier,"Personnage dégat : %d\n",personnage.degat);
    fprintf(fichier,"Personnage endurance : %d\n",personnage.endurance);
    fprintf(fichier,"Personnage morale : %d\n",personnage.morale);


    // fseek(fichier,0,SEEK_SET);
    fclose(fichier);



    printf("Après avoir exploré un long couloir peu éclairé, vous croisez une lourde porte en chène\n");
    printf("que faite vous ?\n");
    printf("1/ continuer votre chemin\n");
    printf("2/ entrer dans la pièce\n");

    char buff[255];
    memset(buff,0,255);
    fgets(buff,0,stdin);
    buff[strlen(buff)-1]=0;



    switch ()
    {
    case 1:
        /*coder pour relancer random event*/
        break;
    case 2:
        /*entrer dans la piece et decouvrir l'histoire et les choix qui s'offre a nous*/
        break;
    }


}


int main(){

    statsplayer();
    return 0;
    
    //   if (fichier == NULL) {
    //     printf("Erreur : Impossible d'ouvrir le fichier.\n");
    //     return;  // Sortir de la fonction si le fichier n'a pas pu être ouvert
    // }
}