#include<stdio.h>

int main()

{
    int N,X[1000],i,count=0,min;

    scanf("%d",&N);

    for(i=0;i<N;i++) {

        scanf("%d",&X[i]);

    }
    
    min = X[0];

    for(i=0;i<N;i++) {

        if(X[i]<min) {

            min = X[i];
        }

    }

    for(i=0;i<N;i++) {

        if(min==X[i]) {
            break;
        }
        count++;
    }

    printf("Menor valor: %d\n",min);

    printf("Posicao: %d\n",count);

    return 0;
}