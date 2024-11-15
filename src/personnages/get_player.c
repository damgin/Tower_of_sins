#pragma once
#include "../global.h"

personnage get_player() {

    personnage p;

    FILE *fd = fopen("personnages/player","r");
    perror("fopen");
    if (fd == NULL) {
        perror("fopen player");
        return p;
    }

    char buf[255]; memset(buf, 0, 255);

    
    while (fgets(buf, sizeof(buf), fd) != NULL) {
        
        if (strncmp(buf, "Nom:", 4) == 0) {
            
            char* token = strtok(buf, ":");  
            token = strtok(NULL, "\n");     
            if (token != NULL) {
                strcpy(p.nom, token);  
            }
        }
        
        // PV Max
        else if (strncmp(buf, "PV Max:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.pv_max = atoi(token);  // Convertit en int
            }
        }
        
        //PV Actuels
        else if (strncmp(buf, "PV Actuels:", 11) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.pv_actuel = atoi(token);
            }
        }
        
        // Dégâts
        else if (strncmp(buf, "Dégâts:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.degat = atoi(token);
            }
        }
        
        // Endurance
        else if (strncmp(buf, "Endurance:", 10) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.endurance = atoi(token);
            }
        }
        
        // Bouclier
        else if (strncmp(buf, "Bouclier:", 9) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.bouclier = atoi(token);
            }
        }
        
        // Poison
        else if (strncmp(buf, "Poison:", 7) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.poison = atoi(token);
            }
        }
        
        // Tours de Poison
        else if (strncmp(buf, "Tours de poison:", 16) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.tour_poison = atoi(token);
            }
        }
        
        // Effet Bouclier
        else if (strncmp(buf, "Effet Bouclier:", 15) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.effet_bouclier = atoi(token);
            }
        }
        
        // Effet Poison
        else if (strncmp(buf, "Effet Poison:", 13) == 0) {
            char* token = strtok(buf, ":");
            token = strtok(NULL, "\n");
            if (token != NULL) {
                p.effet_poison = atoi(token);
            }
        }

        // les Capacités
        else if (strncmp(buf, "Capacité", 8) == 0) {

            for (int i = 0; i < 3; i++)
            {
               

                //  nom de la capacité
                memset(buf,0,255);
                fgets(buf, sizeof(buf), fd);
                strtok(buf, ":");
                char * player_name = strtok(NULL, "\n");
                if (player_name != NULL) {
                    strcpy(p.capacite[i].nom, player_name);
                }

                //  puissance
                memset(buf,0,255);

                fgets(buf, sizeof(buf), fd);
                strtok(buf, ":");
                char* player_puissance = strtok(NULL, "\n");
                if (player_puissance != NULL) {
                    p.capacite[i].puissance = atoi(player_puissance);
                }

                //coût d'endurance 
                memset(buf,0,255);

                fgets(buf, sizeof(buf), fd);
                strtok(buf, ":");
                char * player_endurance = strtok(NULL, "\n");
                if (player_endurance != NULL) {
                    p.capacite[i].cout_endurance = atoi(player_endurance);
                }

                 memset(buf,0,255);
                fgets(buf, sizeof(buf), fd);
            }
            
        }
    }

    fclose(fd);
    return p;
}
