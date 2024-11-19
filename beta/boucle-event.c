#include <stdio.h> 
#include <string.h> 
#include <time.h>
#include <unistd.h>
#include <stdlib.h>


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


void event_handler(){




    int event = (float)rand()/RAND_MAX *10+1;
    // printf("%d\n",event);

switch (event)
{
case 1:
    printf("Combat");
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



//     if (event == 1 || event > 1)
//     {
//         printf("Vous Entrez dans la porte du mal");
        
//     }
//     else if (event == 2)
//     {
//        printf("Vous Entrez dans la porte du mal2");
//     }
//     else if (event == 3)
//     {
//           printf("Vous Entrez dans la porte du mal2");
//     }
//      else if (event == 4)
//     {
//           printf("Vous Entrez dans la porte du mal2");
//     }
//      else if (event == 5)
//     {
//           printf("Vous Entrez dans la porte du mal2");
//     }
//      else if (event == 6)
//     {
//         /* code */
//     }
//     else if (event == 7)
//     {
//         /* code */
//     }
//      else if (event == 8)
//     {
//         /* code */
//     }
//      else if (event == 9)
//     {
//         /* code */
//     }
//      else if (event == EVENT_FIGHT)
//     {
//         /* code */
//         // combat()
//     }
    
    

// }




