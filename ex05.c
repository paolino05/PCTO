#include <stdio.h>

int main ()
{

int x;

printf("inserisci la tua età");
scanf("%d", &x);
printf("x: %d\n", x);

if(x>18)
{
    printf("sei maggiorenne");
}
if(x<18)
{
    printf("sei minorenne");
}





}