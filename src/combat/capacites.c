
void bouclierOmbre(personnage* p) {
    p->effet_bouclier = 1; // Active le bouclier
    p->bouclier = p->pv_max / 5; // bouclier qui absorbe 20% des dégâts

    printf("%s invoque un bouclier d'ombre. Le bouclier absorbera jusqu'à %d dégâts.\n", p->nom, p->bouclier);
}

void Jugement(personnage* p, personnage* e) {
    printf("%s lance Jugement sur %s avec des dégâts de %d.\n", p->nom, e->nom, p->degat);
    e->pv_actuel -= p->degat;
    if (e->pv_actuel < 0) e->pv_actuel = 0; 

    printf("%s a maintenant %d PV.\n", e->nom, e->pv_actuel);
}

void soin(personnage* p) {
    int soin = p->pv_max / 4; // soin équivalent à 25% des PV max a corriger
    p->pv_actuel += soin;

    if (p->pv_actuel > p->pv_max) {
        p->pv_actuel = p->pv_max; // Ne pas dépasser les PV max
    }

    printf("%s se soigne et récupère %d PV. Il a maintenant %d PV.\n", p->nom, soin, p->pv_actuel);
}

void utiliserCapacite(personnage* p, personnage* e, int capacite_index) {
    if (capacite_index < 0 || capacite_index >= 3) {
        printf("Capacité invalide.\n");
        return;
    }
    CapaciteSpeciale cap = p->capacite[capacite_index];
    
    if (cap.cout_endurance > p->endurance) {
        printf("Pas assez d'endurance pour utiliser cette capacité.\n");
        return;
    }

    
    p->endurance -= cap.cout_endurance;

   
    switch (capacite_index) {
        case 0: // Jugement
            Jugement(p, e);
            break;
        case 1: // Soin
            soin(p);
            break;
        case 2: // Bouclier d'ombre
            bouclierOmbre(p);
            break;
        default:
            printf("Choix invalide pour la capacité.\n");
    }
}




void afficherEtat(personnage* p) {
    printf("Nom: %s, PV: %d/%d, Endurance: %d, Bouclier: %d\n", p->nom, p->pv_actuel, p->pv_max, p->endurance, p->bouclier);
}

void afficherInterfaceCombat(personnage* joueur, personnage* ennemi) {
    printf("tour de : garde\n");
    printf("prochain tour : %s\n\n", ennemi->nom);

    printf("HP          \t\t\t HP\n");
    printf("[ %s  %d%% ] \t\t\t [ %s  %d%% ]\n", joueur->nom, (joueur->pv_actuel * 100) / joueur->pv_max, ennemi->nom, (ennemi->pv_actuel * 100) / ennemi->pv_max);

    printf("\n| Capacite | Cout |\n");
    printf("|----------|------|\n");
    
    for (int i = 0; i < 3; i++) {
        printf("| %s | %d |\n", joueur->capacite[i].nom, joueur->capacite[i].cout_endurance);
    }

    printf("\nBattle log:\n");
}