// #include "global.c"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void tell_story(){

    char* tour;
    char* texte;
    char buf_filecontent[BUFSIZ];

    FILE * fd_dessin = fopen ("story.txt","r");


    fread(buf_filecontent,BUFSIZ,1,fd_dessin);

    // printf("%s\n",tour); /*affiche */

    tour = strtok(buf_filecontent,"#");
    texte =strtok(NULL,"#");

    // printf("%s\n",texte);





int i= 0;
while (tour[i]!='\0')
{
  if (tour[i]=='\n')
  {
    usleep(50000);
    fflush(stdout);
    printf("%c",tour[i]);
  }
  else{
    printf("%c",tour[i]);

  }
    i++;

}
    i=0;
while (texte[i] != '\0')
{
    printf("%c",texte[i]);
    usleep(50000);
    fflush(stdout);
    i++;
}

}



int main(){

    tell_story();


    return 0;
}








































// void tell_story(){

//     char* tour;
//     char* texte;
//     char buf_filecontent[BUFSIZ];

//     FILE * fd_dessin = fopen ("story.txt","r");


//     fread(buf_filecontent,BUFSIZ,1,fd_dessin);

//     // printf("%s\n",tour); /*affiche */

//     tour = strtok(buf_filecontent,"#");
//     texte =strtok(NULL,"#");

//     // printf("%s\n",texte);





// int i= 0;
// while (tour[i]!='\0')
// {
//   if (tour[i]=='\n')
//   {
//     usleep(50000);
//     fflush(stdout);
//     printf("%c",tour[i]);
//   }
//   else{
//     printf("%c",tour[i]);

//   }
//     i++;

// }
//     i=0;
// while (texte[i] != '\0')
// {
//     printf("%c",texte[i]);
//     usleep(50000);
//     fflush(stdout);
//     i++;
// }

// }






// int main(){

//     tell_story();


//     return 0;
// }










