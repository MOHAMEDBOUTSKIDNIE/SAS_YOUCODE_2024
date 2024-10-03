#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A ,B , max;
    printf("entrer la valeur de A :");
    scanf("%f",& A);
    printf("entrer la valeur de B :");
    scanf("%f",& B);
   max =A;
if (B > max){
    max = B;

printf("le maximum de ces nombre est:%.2f",max);
}
    return 0;
}
