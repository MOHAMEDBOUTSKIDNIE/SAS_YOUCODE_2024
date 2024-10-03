#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;
    printf("veuillez entrer ton age:\n");
    scanf("%d", &X);
    if(X>= 18){
        printf("vous etes eligible pour voter.");
    }
    else{
        printf(" vous n'etes pas eligible pour voter.");
    }
    return 0;
}
