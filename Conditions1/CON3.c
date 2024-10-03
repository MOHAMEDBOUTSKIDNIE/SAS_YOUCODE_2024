#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N;
    printf("veuillez entrer un note:\n");
    scanf("%f",&N);

    if(N<10)
        printf("il est recale");

    else if(10<= N && N<=12)

        printf("il obtient la mention passable");
    else if(12<N && N<14)
            printf("il obtient la mention assez bien");



    else if(14<= N && N <=16)

        printf("il obtient la mention bien");

    else

        printf("il obient mention tres bien");


    return 0;
}
