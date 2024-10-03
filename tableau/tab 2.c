#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
   printf("enter le nombre des elemnts : ");
   scanf("%d",& n);
    int T[1000];
   for(int i=0;i<n;i++){
    printf("saisir %d :",i+1);
   scanf("%d ",&T[i]);

   }
    return 0;
}
