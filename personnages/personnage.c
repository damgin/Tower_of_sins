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
    int bouclier;  //pour le bouclier ombre
    int poison;    // pour le souffle
    int tour_poison; // Nombre de tours restants pour l'effet du poison
    int effet_bouclier; // Flag  bouclier
    int effet_poison;   // Flag poison
    CapaciteSpeciale capacite[3];
    (void) (*)(personnage*,personnage*) p_comportement; ///a regarder
} personnage;
