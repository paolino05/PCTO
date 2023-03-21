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
    
    if(x == y && y == z && z == x)
    {
        printf("è un triangolo equilatero");
    }  
    else if((x == y && z != x)||(x == y && z != x))
    {
        printf("è un triangolo isoscele");
    }
    else
    {
        printf("è un trinagolo scaleno");
    }
    
}
else
{
    printf("non è un triangolo");
}

}
