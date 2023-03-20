#include <stdio.h>

int main ()
{

int x;
int y;

printf("insericsci due numeri");
scanf("%d %d", &x, &y);
printf("x: %d\n y:%d\n", x, y);
int somma = x+y;
int differenza = x-y;
int moltiplicazione = x*y;
int divisione = x/y;
printf("la somma di x+y è %d\n", somma);
printf("la differenza di x-y è %d\n", differenza);
printf("la moltiplicazione di x*y è %d\n", moltiplicazione);
printf("la divisione di x/y è %d\n", divisione);

}