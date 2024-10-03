#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entrer un nombre:");
    scanf("%d",&n);

    for(int i=1;i<10;i=i+2){

            if(n%2!=0){
        printf("%d ",i);
        }

    else
        printf("ereur");
    }
    return 0;
}
