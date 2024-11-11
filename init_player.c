void init_player(personnage *p) {
    FILE *fd = fopen("Falthes.txt", "r");
    if (fd == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    char buf[255];
    memset(buf, 0, 255);

    // Lire chaque ligne du fichier
    while (fgets(buf, sizeof(buf), fd) != NULL) {
        // Extraire le nom
        if (strncmp(buf, "Nom:", 4) == 0) {
            // Utiliser strtok pour extraire le nom après "Nom: "
            char* token = strtok(buf, ":");  // Divise par ":"
            token = strtok(NULL, "\n");      // Divise par le saut de ligne
            if (token != NULL) {
                strcpy(p->nom, token);  // Copie le nom du joueur
            }
        }
        
        // Extraire les PV Max
        else if (strncmp(buf, "PV Max:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->pv_max = atoi(token);  // Convertit en entier
            }
        }
        
        // Extraire les PV Actuels
        else if (strncmp(buf, "PV Actuels:", 11) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->pv_actuel = atoi(token);
            }
        }
        
        // Extraire les Dégâts
        else if (strncmp(buf, "Dégâts:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->degat = atoi(token);
            }
        }
        
        // Extraire l'Endurance
        else if (strncmp(buf, "Endurance:", 10) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->endurance = atoi(token);
            }
        }
        
        // Extraire le Bouclier
        else if (strncmp(buf, "Bouclier:", 9) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->bouclier = atoi(token);
            }
        }
        
        // Extraire le Poison
        else if (strncmp(buf, "Poison:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->poison = atoi(token);
            }
        }
        
        // Extraire les Tours de Poison
        else if (strncmp(buf, "Tours de poison:", 16) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->tour_poison = atoi(token);
            }
        }
        
        // Extraire l'Effet Bouclier
        else if (strncmp(buf, "Effet Bouclier:", 15) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->effet_bouclier = atoi(token);
            }
        }
        
        // Extraire l'Effet Poison
        else if (strncmp(buf, "Effet Poison:", 13) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->effet_poison = atoi(token);
            }
        }

        // Extraire les Capacités
        else if (strncmp(buf, "Capacité", 8) == 0) {
            int capacite_index = (buf[9] - '1'); // Capacité 1 -> index 0, etc.
            if (capacite_index >= 0 && capacite_index < 3) {
                // Lire le nom de la capacité
                fgets(buf, sizeof(buf), fd);
                char* token = strtok(buf, ":");
                token = strtok(NULL, "\n");
                if (token != NULL) {
                    strcpy(p->capacite[capacite_index].nom, token);
                }

                // Lire la puissance de la capacité
                fgets(buf, sizeof(buf), fd);
                token = strtok(buf, ":");
                token = strtok(NULL, "\n");
                if (token != NULL) {
                    p->capacite[capacite_index].puissance = atoi(token);
                }

                // Lire le coût d'endurance de la capacité
                fgets(buf, sizeof(buf), fd);
                token = strtok(buf, ":");
                token = strtok(NULL, "\n");
                if (token != NULL) {
                    p->capacite[capacite_index].cout_endurance = atoi(token);
                }
            }
        }
    }

    fclose(fd);
}
