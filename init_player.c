void init_player(personnage *p) {
    FILE *fd = fopen("Falthes.txt", "r");
    if (fd == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    char buf[255];
    memset(buf, 0, 255);

    
    while (fgets(buf, sizeof(buf), fd) != NULL) {
        
        if (strncmp(buf, "Nom:", 4) == 0) {
            
            char* token = strtok(buf, ":");  
            token = strtok(NULL, "\n");     
            if (token != NULL) {
                strcpy(p->nom, token);  
            }
        }
        
        // PV Max
        else if (strncmp(buf, "PV Max:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->pv_max = atoi(token);  // Convertit en entier
            }
        }
        
        //PV Actuels
        else if (strncmp(buf, "PV Actuels:", 11) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->pv_actuel = atoi(token);
            }
        }
        
        // Dégâts
        else if (strncmp(buf, "Dégâts:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->degat = atoi(token);
            }
        }
        
        // Endurance
        else if (strncmp(buf, "Endurance:", 10) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->endurance = atoi(token);
            }
        }
        
        // Bouclier
        else if (strncmp(buf, "Bouclier:", 9) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->bouclier = atoi(token);
            }
        }
        
        // Poison
        else if (strncmp(buf, "Poison:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->poison = atoi(token);
            }
        }
        
        // Tours de Poison
        else if (strncmp(buf, "Tours de poison:", 16) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->tour_poison = atoi(token);
            }
        }
        
        // Effet Bouclier
        else if (strncmp(buf, "Effet Bouclier:", 15) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->effet_bouclier = atoi(token);
            }
        }
        
        // Effet Poison
        else if (strncmp(buf, "Effet Poison:", 13) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p->effet_poison = atoi(token);
            }
        }

        // les Capacités
        else if (strncmp(buf, "Capacité", 8) == 0) {
            int capacite_index = (buf[9] - '1'); // Capacité 1 -> index 0, etc.
            if (capacite_index >= 0 && capacite_index < 3) {
                //  nom de la capacité
                fgets(buf, sizeof(buf), fd);
                char* token = strtok(buf, ":");
                token = strtok(NULL, "\n");
                if (token != NULL) {
                    strcpy(p->capacite[capacite_index].nom, token);
                }

                //  puissance
                fgets(buf, sizeof(buf), fd);
                token = strtok(buf, ":");
                token = strtok(NULL, "\n");
                if (token != NULL) {
                    p->capacite[capacite_index].puissance = atoi(token);
                }

                //coût d'endurance 
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
