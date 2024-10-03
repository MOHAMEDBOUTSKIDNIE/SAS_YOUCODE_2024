#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("veuillez entrer un nombre:");
    scanf("%d",&N);
    if(N % 2==0)
    {
    printf("ce nombre est paire.\n",N);
    }
    else{
    printf("ce nombre est impaire.\n",N);
}


    return 0;
}
