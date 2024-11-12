#include <stdio.h> 
#include <string.h> 
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

#include "boucle-event.c"
#include "get-player.c"

#define E_COMBAT 1
#define event2 2
#define event3 3
#define event4 4 
#define event5 5 
#define event6 6 
#define event7 7 
#define event8 8 
#define event9 9
#define event10 10




int main(){
   personnage player =  get_player();

   printf("%d",player.pv);
   printf("%s",player.name);
   printf("%d",player.pv);
   printf("%d",player.pv);
       
    srand(time(NULL));  
    while ()
    {
        int event;
        event_handler(event);

    }
    return 0;
    }