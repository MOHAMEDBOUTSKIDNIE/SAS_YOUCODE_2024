#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ms ,kmh;
    printf("entrer la vitessse en kilometres par heure:\n");
    scanf("%f",&kmh);
    ms= kmh * 0.27778;
    printf("la vitesse en metres par secende est:%.2f",ms);

    return 0;
}
