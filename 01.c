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
    int degat;
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
    equipe.personnages[0].degat = 20;
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
    ///déclaration
    char buf[255];
    
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



    printf("\n");
    printf("**********************************************\n");
    printf("* Bienvenue dans la Tour des Péchés          *\n");
    printf("**********************************************\n");
    printf("\n");
    printf("Vous vous tenez face à la Tour des Péchés, une imposante structure qui s'élève vers un ciel sombre et orageux.\n");
    printf("La pierre noire de la tour semble absorber toute lumière, et l'air est lourd, chargé d'un étrange parfum de\n");
    printf("souffre et de désespoir. Les gargouilles au sommet vous observent silencieusement, et des murmures lointains\n");
    printf("parviennent à vos oreilles comme des échos de âmes perdues.\n");
    printf("\n");
    printf("Il n'y a plus de retour en arrière. En franchissant ces portes, vous vous aventurez dans l'inconnu, prêt à\n");
    printf("affronter des dangers insoupçonnés et à affronter vos propres démons.\n");
    printf("\n");
    printf("Tremblez, car chaque étage vous rapprochera de l'inéluctable, de l'ultime jugement...\n");
    printf("\n");
    printf("Êtes-vous prêt à entrer dans la Tour des Péchés ?\n");
    printf("\n");

        ///for(int i = 0; i<10; i++){
        printf("Vous entrée dans un couloir lugubre, une porte ce trouve sur votre gauche, que faite vous ?\n");

        printf("1/ continuer votre chemin et ignore cette porte\n");
        printf("2/ tenter d'ouvrir la porte\n");

        char buf[255];
        fgets(buf,255,stdin);
        memset(buf,0,255);
        buf[strlen(buf)-1]=0;///suprime \n
            if(buf = "1"){
               continue;
            }
            else if(buf ="2"){

                ///nombre d'item aléatoire ++ item aléatoire 

                printf("vous entrez dans une pièce sombre et une odeur de pourriture s'en dégage,\n");
                printf("vous trouvez une torche\n");
                item_torche++;
                printf("vous trouvez  un feu de camp\n");
                item_feu_de_camp++;
                printf("vous trouvez une potion inconnue\n");
                item_potion_inconnue++;
                continue;
            }
    ///}















    return 0;
}