#include <stdio.h>

int main ()

{

    float x;
printf("inserisci una temperatura celsius");
scanf("%f", &x);
//printf("x:%f\n", x);


if(x<-273.15)
{
    printf("errore");
}
else
{
    float Fahrenheit = (9/5)*x+32;
    float kelvin = x+273.15;

    printf("Fahrenheit: %f\n", Fahrenheit);
    printf("kelvin: %f\n",kelvin );
}
}

