#include <stdio.h>

int main()
{

int numero;
printf("utente, inserisci un numero");
scanf("%d", &numero);

int divisore = numero - 1;
while (divisore > 1)
{
    if(numero % divisore == 0)
    {
        printf("%d non è un numero primo\n", divisore);
        break;
    }
    divisore--;
}
if (divisore == 1)
printf("è un numero primo\n");

}