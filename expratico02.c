#include <stdio.h>

int main ()

{

int x;
int y;
int z;

printf("insericsci tre numeri");
scanf("%d %d %d", &x, &y, &z);
printf("x: %d\n y:%d\n z:%d\n", x, y, z);

if(x-y==y-z)
{
    printf("è in progressione aritmetica");
}
else 
{
    printf("non è in progressione aritmetica");
}
    
}