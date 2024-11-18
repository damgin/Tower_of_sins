#pragma once 
#include "../global.h"


void event_handler(){

    srand(time(NULL));
    char buf[BUFSIZ];
    int a;

    printf("Entrez votre choix... \n");
    memset(buf,0,BUFSIZ);
    fgets(buf,255,stdin);
    buf[strlen(buf)-1]=0;
    a = atoi(buf);
  
if (a == ENTRER)
{

    // printf(" ca marche ");
    int event = (float)rand()/RAND_MAX *2+1;/*mettre le nombre en fonction des events*/
    // printf("%d\n",event);

    switch (event)
    {
    case 1:

        combat();
        break;
    case 2:
        printf("event 2 ");
        break;
    case 3:
        printf("event 3");

    default:
        break;
    }
    }
else if (a == PASSER)
{
    
    printf("vous avez continuer votre chemin\n");
   
    
}


} 






