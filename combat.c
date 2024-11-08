#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "personnages/ennemies/garde_des_limbes.c"



/// convertir ennemie en E
/// convertir joueur en P
//gl



void combat() {
    personnage* p;
    FILE * fd = fopen("Falthes.txt","r");
    init_player (p);
    personnage* e;
    spawn_garde_des_limbes (e);


    int choix;

    while (p->pv_actuel > 0 && e->pv_actuel > 0) {
        printf("\n--- Tour du joueur ---\n");
        //afficherEtatPersonnage(p);
        //afficherEtatEnnemie(e);

        printf("Choisissez une action:\n");
        printf("1: Attaquer\n");
        printf("2: Utiliser une capacité spéciale\n");
        printf("3: Passer son tour\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                attaquer(p, e);
                break;
            case 2:
                printf("Choisissez une capacité (0-4): ");
                int capacite_index;
                scanf("%d", &capacite_index);
                utiliserCapacite(p, e, capacite_index);
                break;
            case 3:
                printf("%s passe son tour.\n", p->nom);
                break;
            default:
                printf("Choix invalide, passez votre tour.\n");
                break;
        }

        // Vérifier si l'ennemi est mort
        if (e->pv_actuel <= 0) {
            printf("\n%s a été vaincu !\n", e->nom);
            break;
        }

        // Action de l'ennemi
        printf("\n--- Tour de l'ennemi ---\n");
        comportement_garde_des_limbes(e,p);   //ajouter player
        // Vérifier si le joueur est mort
        if (p->pv_actuel <= 0) {
            printf("\n%s a été vaincu !\n", p->nom);
            break;
        }
    }
}
 ///peut on return 0 ?
        ///pointeur sur fonction!!!!!!!!!
        ///// void (*)(personnage*,personnage*)
