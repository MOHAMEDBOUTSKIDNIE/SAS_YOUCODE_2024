#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km , yards;
    printf("veuillez entrer la distance en kilometres:\n");
    scanf("%f",&km);
    yards = km * 1093.61;
    printf("la distance en yards est:%.2f",yards);
    return 0;
}
