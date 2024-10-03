#include <stdio.h>

int main()
{
    float celsuis, kelvin;
    printf("veuillez entrer la temperature en celsuis:\n");
    scanf("%f",&celsuis);
    kelvin = celsuis + 273.15 ;
    printf("la temperature en kelvin est:%.2f\n",kelvin);

    return 0;
}
