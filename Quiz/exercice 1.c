#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A ,B ,C ,D;
    printf("veuillez entrer la longeur\n");
    scanf("%d", &A);
    printf("veuillez entrer la largeur\n");
    scanf("%d", &B);
    C = A * B;
    D = 2*( A+ B);

    printf("la solution de aire est:%d\n",C);

    printf("la solution de perimetre est:%d",D);



    return 0;
}
