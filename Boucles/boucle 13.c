#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre,i,somme;
    printf("entrer un nombre :");
    scanf("%d", & nombre);
    for(i=1;i<=10;i++){
        somme= nombre * i;
        printf(" %d * %d = %d\n",nombre,i,somme);


    }
    return 0;
}
