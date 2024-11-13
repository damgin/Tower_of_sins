

void save_player(personnage *perso) {
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
