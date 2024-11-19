#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>

#define E_COMBAT 1
#define event2 2
#define event3 3                


#define ENTRER 1
#define PASSER 2




#include "./assemblage/tell_story.c"
// #include "./assemblage/story.txt"


#include "./combat/personnage.c"
#include "./personnages/get_player.c"
#include "./personnages/save_player.c"
#include "./personnages/garde_des_limbes.c"
#include "./combat/capacites.c"
#include "./combat/combat.c"

#include "./assemblage/boucle-event.c"












