#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius,kelvin;
    printf("veuillez la temperature en c:");
    scanf("%f",& celsius);
    kelvin = celsius+ 273.15;
    printf("la temperature en kelvin est:%.2f",kelvin);

}



