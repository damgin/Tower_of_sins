
////GARDE DES LIMBES
typedef struct CapaciteSpeciale{  
    char nom[30];
    int puissance;
    int cout_endurance;
} CapaciteSpeciale;

typedef struct s_garde_des_limbes {
    char nom[30];
    int pv_max;
    int pv_actuel;
    int degat;
    int endurance;
    CapaciteSpeciale capacite;
} t_garde_des_limbes;