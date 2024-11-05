

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

typedef struct Personnage{
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

