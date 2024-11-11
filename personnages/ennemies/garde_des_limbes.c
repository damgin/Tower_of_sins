#include "personnages\personnage.c"

void comportement_garde_des_limbes(personnage *garde, personnage *cible) {

    //souffle de l'ombre
    
    if (cible->tour_poison > 0) {
        printf("%s subit %d dégâts de poison (Restant: %d tours).\n", cible->nom, cible->poison, cible->tour_poison);
        cible->pv_actuel -= cible->poison;  
        if (cible->pv_actuel < 0) {
            cible->pv_actuel = 0; ///pour éviter les bug (pv négatif qui proc pas la fin de combat)
        }
        cible->tour_poison--; //réduit le timer poison au début du round
    }

    // Si le Garde des Limbes a assez d'endurance et que le Souffle des Limbes ou le Bouclier ne sont pas actifs
    if (garde->endurance >= garde->capacite[0].cout_endurance && garde->effet_poison == 0 && garde->effet_bouclier == 0) {
        
        printf("%s utilise %s sur %s. Dégâts: %d\n", garde->nom, garde->capacite[0].nom, cible->nom, 
               garde->capacite[0].puissance);
        
        
        cible->pv_actuel -= garde->capacite[0].puissance;
        garde->endurance -= garde->capacite[0].cout_endurance;  // Réduit l'endurance du Garde des Limbes
        if (cible->pv_actuel < 0) {
            cible->pv_actuel = 0; ///pour éviter les bug (pv négatif qui proc pas la fin de combat)
        }

        //POISON!!
        cible->poison = 2;  // Dégat poison 
        cible->tour_poison = 3;  // Duré poison 
        garde->effet_poison = 1;  //  poison  actif
        printf("Le poison commence à affecter %s. Dégâts par tour: %d, Durée: %d tours.\n", cible->nom, cible->poison, cible->tour_poison);
    }
    ///bouclier seulement si pas de poison d'actif
    else if (garde->endurance >= garde->capacite[3].cout_endurance && garde->effet_bouclier == 0) {
        printf("%s utilise %s pour se protéger. Bouclier: %d\n", garde->nom, garde->capacite[3].nom, garde->capacite[3].puissance);
        garde->bouclier = garde->capacite[3].puissance;  // bouclier == puissance
        garde->endurance -= garde->capacite[3].cout_endurance;  
        garde->effet_bouclier = 1;  //bouclier actif
    }
    // attaque de base 
    else {
        printf("%s attaque normalement %s avec des dégâts de %d.\n", garde->nom, cible->nom, garde->degat);
        cible->pv_actuel -= garde->degat;  // Applique les dégâts de l'attaque normale
        if (cible->pv_actuel < 0) {
            cible->pv_actuel = 0;   ///pour éviter les bug (pv négatif qui proc pas la fin de combat)
        }
    }

    printf("PV du %s après attaque: %d\n", cible->nom, cible->pv_actuel);
    printf("Endurance du %s après l'attaque: %d\n", garde->nom, garde->endurance);
}

//spawn du mob
void spawn_garde_des_limbes(personnage *garde) {
    strcpy(garde->nom, "Garde des Limbes");
    garde->pv_max = 200;
    garde->pv_actuel = 200;
    garde->degat = 30;
    garde->endurance = 100;
   //// garde->p_comportement = comportement_garde_des_limbes; ///comprend cette ligne!!
    // Capacités du mob
    strcpy(garde->capacite[0].nom, "Souffle des Limbes");
    garde->capacite[0].puissance = 50;
    garde->capacite[0].cout_endurance = 20;

    strcpy(garde->capacite[1].nom, "bouclier d'Ombre");
    garde->capacite[1].puissance = 30;
    garde->capacite[1].cout_endurance = 15;

    strcpy(garde->capacite[2].nom, "Frappe Spectrale");
    garde->capacite[2].puissance = 40;
    garde->capacite[2].cout_endurance = 25;
}
