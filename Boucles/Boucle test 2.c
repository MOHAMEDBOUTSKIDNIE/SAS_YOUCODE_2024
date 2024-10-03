#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre,i,somme;

    printf("entrer un nombre:");
    scanf("%d",& nombre);

    for(i=10;i>=1;i--)
    {
        somme = nombre * i;

        printf("%d * %d =  %d \n",i,nombre,somme);

    }

    return 0;
}
