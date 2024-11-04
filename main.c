#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


typedef struct {
    char nom[30];
    int puissance;
    int cout_endurance;
} CapaciteSpeciale;

typedef struct {
    char nom[30];
    int effet_pv;
    int effet_endurance;
    int effet_morale;
} Equipement;

typedef struct {
    char nom[30];
    char classe[20];
    int pv_max;
    int pv_actuel;
    int endurance;
    int morale;
    CapaciteSpeciale capacite;
    bool est_leader;
    Equipement inventaire[10];
    int nb_objets_inventaire;
} Personnage;


typedef struct {
    Personnage personnages[3];  
    int nb_personnages;         

   
} Equipe;



int main() {
    
    Equipe equipe;
    equipe.nb_personnages = 3;

    ////////////SOLDAT
    strcpy(equipe.personnages[0].nom, "Falthes");
    strcpy(equipe.personnages[0].classe, "Soldat");
    equipe.personnages[0].pv_max = 100;
    equipe.personnages[0].pv_actuel = 100;
    equipe.personnages[0].endurance = 80;
    equipe.personnages[0].morale = 60;
    equipe.personnages[0].est_leader = true;

    ////////////ERUDIT
    strcpy(equipe.personnages[1].nom, "Jean");
    strcpy(equipe.personnages[1].classe, "Érudit");
    equipe.personnages[1].pv_max = 70;
    equipe.personnages[1].pv_actuel = 70;
    equipe.personnages[1].endurance = 100;
    equipe.personnages[1].morale = 80;
    equipe.personnages[1].est_leader = false;

    ////////////MARAUDEUR
    strcpy(equipe.personnages[2].nom, "Casca");
    strcpy(equipe.personnages[2].classe, "Maraudeur");
    equipe.personnages[2].pv_max = 80;
    equipe.personnages[2].pv_actuel = 80;
    equipe.personnages[2].endurance = 90;
    equipe.personnages[2].morale = 50;
    equipe.personnages[2].est_leader = false;

    return 0;
}
