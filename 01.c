#include <stdbool.h>

// Définition des capacités spéciales pour chaque classe
typedef struct {
    char nom[30];
    int puissance;          // Puissance de la capacité
    int cout_endurance;     // Coût en Endurance pour utiliser la capacité
} CapaciteSpeciale;

// Définition de l'équipement pour l'inventaire
typedef struct {
    char nom[30];
    int effet_pv;           // Effet de l'objet sur les PV
    int effet_endurance;    // Effet de l'objet sur l'Endurance
    int effet_morale;       // Effet de l'objet sur la Morale
} Equipement;

// Structure du personnage
typedef struct {
    char nom[30];           // Nom du personnage
    char classe[20];        // Classe : "Soldat", "Érudit" ou "Maraudeur"
    int pv_max;             // Points de vie maximum
    int pv_actuel;          // Points de vie actuels
    int endurance;          // Endurance actuelle
    int morale;             // Morale actuelle
    
    CapaciteSpeciale capacite;  // Capacité spéciale de la classe
    bool est_leader;            // Détermine si le personnage est le leader

    Equipement inventaire[10];  // Inventaire avec une capacité de 10 objets maximum
    int nb_objets_inventaire;   // Nombre d'objets dans l'inventaire

} Personnage;