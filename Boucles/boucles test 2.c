#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X ,i;
    X = 0;
    for (i=1 ; i<= 20 ; i++ ){
     X = X+i;
    }
    printf("la somme des 20 premiers entiers positifs est : %d",X);
    return 0;
}
