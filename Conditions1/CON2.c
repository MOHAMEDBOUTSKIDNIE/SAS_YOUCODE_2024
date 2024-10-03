#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("entrer un nombre\n");
    scanf("%d",& N);

    if(N>0){
         printf("le nombre est positif");
    }
   else if(N<0){
         printf("le nombre est negatif");
    }
   else {
         printf("le nombre est null");
    }



    return 0;
}
