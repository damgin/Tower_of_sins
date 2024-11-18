#pragma once
void combat() {
        
    personnage player = get_player(); 

    personnage enemy; 
    spawn_garde_des_limbes(&enemy); 

    personnage* p = &player;
    personnage* e = &enemy;  


    int choix;

    while (p->pv_actuel > 0 && e->pv_actuel > 0) {
        printf("\n--- Tour du joueur ---\n");
        
        afficherInterfaceCombat(p, e);

        printf("Choisissez une action:\n");
        printf("1: Attaquer\n");
        printf("2: Utiliser une capacité spéciale\n");
        printf("3: Passer son tour\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("%s attaque normalement %s avec des dégâts de %d.\n", p->nom, e->nom, p->degat);
        e->pv_actuel -= p->degat;  // Applique les dégâts de l'attaque normale
        if (e->pv_actuel < 0) {
            e->pv_actuel = 0;   ///pour éviter les bug (pv négatif qui proc pas la fin de combat)
            break;
        }
            break;
            case 2:
                printf("Choisissez une capacité (0-3): ");
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
