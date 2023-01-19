#include<stdio.h>

int main()

{
    float n,sum=0,avg,i=0;

    while(1) {

        scanf("%f",&n);

        if(n>=0 && n<=10) {
            sum = sum + n;
            i++;
        }

        else 

        printf("nota invalida\n");


        if(i>=2)
        {
            break;

        }

        
    }

    avg = sum/2;

    printf("media = %.2f\n",avg);

    return 0;
}