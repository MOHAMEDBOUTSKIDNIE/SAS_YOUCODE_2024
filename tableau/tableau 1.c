#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[4];
    int i,S,M;
    for(i=0 ; i<4;i++){
    printf("donner la note de l'etudient num %d :",i+1);
    scanf("%f",&T[i]);
    }
 S =0;
    for (i =0 ;i <4 ;i++)
       S = S + T[i];
    M = S / 4;
    printf("la moyenne des notes est :%.2d",M);



    return 0;
}
