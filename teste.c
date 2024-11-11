#include <stdio.h>
#include <string.h>
#include "combat.c"
#include "C:\\Users\\ant97\\Desktop\\TOWER_OF_SINS\\Tower_of_sins\\personnages\\ennemies\\garde_des_limbes.c"


#include "init_player.c"
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

typedef struct personnage { 
    char nom[30];
    int pv_max;
    int pv_actuel;
    int degat;
    int endurance;
    int bouclier;  // pour le bouclier ombre
    int poison;    // pour le souffle
    int tour_poison; // Nombre de tours restants pour l'effet du poison
    int effet_bouclier; // Flag bouclier
    int effet_poison;   // Flag poison
    CapaciteSpeciale capacite[3];
} personnage;

void sauvegarder_personnage(personnage *perso) {
    FILE *fichier = fopen("personnage.txt", "w");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return;
    }

    fprintf(fichier, "Nom: %s\n", perso->nom);
    fprintf(fichier, "PV Max: %d\n", perso->pv_max);
    fprintf(fichier, "PV Actuels: %d\n", perso->pv_actuel);
    fprintf(fichier, "Dégâts: %d\n", perso->degat);
    fprintf(fichier, "Endurance: %d\n", perso->endurance);
    fprintf(fichier, "Bouclier: %d\n", perso->bouclier);
    fprintf(fichier, "Poison: %d\n", perso->poison);
    fprintf(fichier, "Tours de poison: %d\n", perso->tour_poison);
    fprintf(fichier, "Effet Bouclier: %d\n", perso->effet_bouclier);
    fprintf(fichier, "Effet Poison: %d\n", perso->effet_poison);
    
    for (int i = 0; i < 3; i++) {
        fprintf(fichier, "Capacité %d:\n", i + 1);
        fprintf(fichier, "  Nom: %s\n", perso->capacite[i].nom);
        fprintf(fichier, "  Puissance: %d\n", perso->capacite[i].puissance);
        fprintf(fichier, "  Coût Endurance: %d\n", perso->capacite[i].cout_endurance);
    }

    fclose(fichier);
}

int main() {
    personnage falthes = {
        "Falthes",        // Nom
        150,              // PV Max
        150,              // PV Actuels
        20,               // Dégâts
        30,               // Endurance
        5,                // Bouclier
        0,                // Poison
        0,                // Tours Poison
        1,                // Effet Bouclier (Flag)
        0,                // Effet Poison (Flag)
        {
            {"Souffle de feu", 40, 10},  // Capacite 1
            {"Coup de bouclier", 10, 5}, // Capacite 2
            {"Soin rapide", 30, 15}      // Capacite 3
        }
    };

    sauvegarder_personnage(&falthes);

    printf("Les statistiques du personnage ont été sauvegardées dans 'personnage.txt'.\n");
    combat();
    return 0;
}
