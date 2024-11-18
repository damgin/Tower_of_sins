#include "./global.h"

int main() {



    personnage player = get_player();
    
    for (int i = 0; i < 3; i++)
    {
        printf("Capa : %s\n",player.capacite[i].nom);
        printf("Capa : %d\n",player.capacite[i].puissance);
        printf("Capa : %d\n",player.capacite[i].cout_endurance);
        printf("\n");
    }
    
   
    //  save_player(&player);  debugg
    combat();


    // tell story

    // boucle evenement
    return 0;
}