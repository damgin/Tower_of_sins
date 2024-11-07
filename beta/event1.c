#include <stdio.h>
#include <string.h>

#include 


    
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
} Personnage;


void eventdhjvruez(){

    strcpy(equipe.personnages[0].nom, "Falthes");
    strcpy(equipe.personnages[0].classe, "Soldat");
    equipe.personnages[0].pv_max = 100;
    equipe.personnages[0].pv_actuel = 100;
    equipe.personnages[0].degat = 20;
    equipe.personnages[0].endurance = 80;
    equipe.personnages[0].morale = 60;
    
    
    FILE * open 


    afficher file



    
};


// Événement 1 : La Salle de la Tempête

// Tu pénètres dans une nouvelle salle de la tour, et une violente tempête se déclenche soudainement, avec des vents froids et hurlants qui secouent les murs. Le sol tremble sous l’intensité du vent.

//     Choix 1 : Chercher un abri derrière un grand pilier pour te protéger.
//     Effet : Augmente ton endurance (+10) car tu trouves un peu de répit, mais baisse légèrement ta morale (-5) à cause de la brutalité de la tempête.

//     Choix 2 : Avancer dans la tempête, en espérant sortir rapidement de la salle.
//     Effet : Augmente ton endurance (+15), mais tes PV diminuent (-10) à cause de l’effort physique pour avancer contre les bourrasques.

//     Choix 3 : Tenter d'utiliser des morceaux de mobilier pour bloquer la tempête.
//     Effet : Baisse ton endurance (-20) car l'effort est épuisant, mais augmente ta morale (+10) car tu as essayé de contrôler la situation.



int fonction event(){
    void eventdhjvruez(){ 100pv

    if 1
    ta perdu -20pv


    modifier les pv 
    

    return 0;
}






#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct perso 
{
    char nom [20];
    char maison[40];
    int attaque;
    int defense;
    int magie;
    int pv;
}t_perso;



void anas(t_perso* persoprincipal) {
    char ligne[1000];

    t_perso troll;
    troll.attaque = 10;
    troll.pv = 100;

    FILE*  fichier = fopen("anas.txt", "w+");
        fprintf(fichier, "vie : %d\n attack : %d", troll.pv, troll.attaque);
        fseek(fichier,0,SEEK_SET);
        fread(ligne,1,255,fichier);
        fclose(fichier);

}

int main() {
    char ligne[1000];
    char name[20];
    int a ;
    char choix2[40];
    t_perso persoprincipal;
     t_perso troll;
    troll.attaque = 10;
    troll.pv = 100; 

    anas(&persoprincipal);

    while (troll.pv > 0)
    {

    printf("1) +10 de vie et 2) +10 d'attaque\n");

    printf("->");
        fgets(choix2, sizeof(choix2), stdin);
        choix2[strlen(choix2)-1] = 0;
        a = atoi(choix2);

        printf("\n");

        switch (a)
            {
            case 1:
                printf("Vous avez utilisez l'attaque 1\n");
                troll.pv += 10;
                FILE*  fichier = fopen("anas.txt", "w+");
                fprintf(fichier, "vie : %d\n attack : %d", troll.pv, troll.attaque);
                fseek(fichier,0,SEEK_SET);
                fread(ligne,1,255,fichier);
                fclose(fichier);

                break;
            case 2:
                printf("Vous avez utilisez l'attaque 2\n");
                troll.attaque += 10;
                fichier = fopen("anas.txt", "w+");
                fprintf(fichier, "vie : %d\n attack : %d", troll.pv, troll.attaque);
                fseek(fichier,0,SEEK_SET);
                fread(ligne,1,255,fichier);
                fclose(fichier);
                break;
            }
    }

    return 0;
}
