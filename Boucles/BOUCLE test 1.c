#include <stdio.h>
#include <stdlib.h>


int main() {
   int nombre,i;
   printf("entrer un nombre:",nombre);
   scanf("%d",& nombre);
   printf("la tabla de multiplication est \n:");

   for(i=1;i<=10;i++){
    printf("%d *  %d = %d \n",i,nombre,i*nombre);

   }

    return 0;
}


