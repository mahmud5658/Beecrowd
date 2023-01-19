#include<stdio.h>

int main()

{
    double n,sum=0,avg;

    int count=0,x;

    while(1) {

        scanf("%lf",&n);

        if(n<0 || n>10) {

            printf("nota invalida\n");
            
        }

        else {

            sum = sum + n;

            count++;
        }

        if(count>=2) {

            break;
        }


    }

    avg = sum/2;

    printf("media = %.2lf\n",avg);

    count=0;

    printf("novo calculo (1-sim 2-nao)\n");

    while(1) {

        scanf("%d",x);

        if(x==1) {

            while(1) {

                scanf("%lf",&n);

                 if(n<0 || n>10) {

            printf("nota invalida\n");
            
        }

        else {

            sum = sum + n;

            count++;
        }

        if(count>=2) {

            break;
        }

            }

    avg = sum/2;

    printf("media = %.2lf\n",avg);

        }
    }





    return 0;
}