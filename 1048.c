#include<stdio.h>

int main()

{
    float X, salary;

    scanf("%f",&X);

    if(0<X && X<=400) {
        salary = X + X * .15;

        printf("Novo salario: %.2f\n",salary);

        printf("Reajuste ganho: %.2f\n",X*.15);

        printf("Em percentual: 15 %%\n");
    }

    else if(X<=800) {

        salary = X + X * .12;

        printf("Nava salario: %.2f\n",salary);

        printf("Reajuste ganho: %.2f\n",X*.12);

        printf("Em percentual: 12 %%\n");

    }

    else if(X<=1200) {

        salary = X + X * .10;

        printf("Nava salario: %.2f\n",salary);

        printf("Reajuste ganho: %.2f\n",X*.10);

        printf("Em percentual: 10 %%\n");

    }

    else if(X<=2000) {

        salary = X + X * .07;

        printf("Nava salario: %.2f\n",salary);

        printf("Reajuste ganho: %.2f\n",X*.07);

        printf("Em percentual: 7 %%\n");

    }

    else if(X>=2000) {

        salary = X + X * .04;

        printf("Nava salario: %.2f\n",salary);

        printf("Reajuste ganho: %.2f\n",X*.04);

        printf("Em percentual: 4 %%\n");

    }


    return 0;
}