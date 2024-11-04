#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

typedef int boo;

/**
 * endurence == mana comme pour l'or on rennomera "endurence"
 */
typedef struct CapaciteSpeciale{  
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
    

    ////////////ERUDIT
    strcpy(equipe.personnages[1].nom, "Jean");
    strcpy(equipe.personnages[1].classe, "Érudit");
    equipe.personnages[1].pv_max = 70;
    equipe.personnages[1].pv_actuel = 70;
    equipe.personnages[1].endurance = 100;
    equipe.personnages[1].morale = 80;
    

    ////////////MARAUDEUR
    strcpy(equipe.personnages[2].nom, "Casca");
    strcpy(equipe.personnages[2].classe, "Maraudeur");
    equipe.personnages[2].pv_max = 80;
    equipe.personnages[2].pv_actuel = 80;
    equipe.personnages[2].endurance = 90;
    equipe.personnages[2].morale = 50;
    
    printf("                        🦇\n");
    printf("                    🦇      🦇\n");
    printf("                         ^\n");
    printf("                        ||\n");
    printf("                        ||\n");
    printf("                       /||\\\n");
    printf("                     __||||__\n");
    printf("                    |  ||||  |\n");
    printf("                    |  ||||  |\n");
    printf("                    |__||||__|\n");
    printf("                    |  ||||  |\n");
    printf("                    |  ||||  |\n");
    printf("                 ___|__||||__|___\n");
    printf("                |     ||||      |\n");
    printf("                |     ||||      |\n");
    printf("                |_____|  |______|\n");
    printf("                |     ||||      |\n");
    printf("                |     ||||      |\n");
    printf("             ___|_____|  |______|___\n");
    printf("             |        ||||          |\n");
    printf("             |        ||||          |\n");
    printf("             |________|  |__________|\n");
    printf("             |        ||||          |\n");
    printf("             |        ||||          |\n");
    printf("         ____|________|  |__________|____\n");
    printf("          |           ||||              |\n");
    printf("          |           ||||              |\n");
    printf("          |___________|  |______________|\n");
    printf("          |           ||||              |\n");
    printf("          |           ||||              |\n");
    printf("      ____|___________|  |______________|____\n");
    printf("           🦇          🦇       🦇\n");
    printf("               🦇             🦇\n");
    return 0;
}