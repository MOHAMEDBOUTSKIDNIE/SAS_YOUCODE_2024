
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("donnrz la dimunition de ce tableau :");
    scanf("%d",&n);
    int T[n];
    printf("donnez les elements:\n");
    for(i=0;i<n;i++){
        printf("donnez les elements num %d",i);
    scanf("%d",& T[i]);
    }
    for(i=0;i<n;i++) printf("%d :",T[i]);
    for(i=0;i<n;i++){

        if(T[i]<0)
            printf("%d ",T[i]);
    }

    return 0;
}
