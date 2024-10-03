#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entrer un nombre:");
    scanf("%d",&n);
    if(n%2==0)
    for(int i=2;i<10;i=i+2)

            printf("%d ",i);

        else
            printf("ereur");

    return 0;
}
