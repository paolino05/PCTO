#include <stdio.h>

int main()
{

int x;
int y;
int z;

printf("insericsci tre lati del trinagolo");
scanf("%d %d %d", &x, &y, &z);

int somma1 = x+y;
int somma2 = y+z;
int somma3 = z+x;

if(somma1>z && somma2>x && somma3>y)
{
    printf("è un triangolo");
}
else
{
    printf("non è un triangolo");
}

}