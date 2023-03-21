#include <stdio.h>

int main()

{
int x;

printf("inserisci il tuo anno di nascita");
scanf("%d", &x);
int a = x-1969;
int b = 1969-x;
if (x > 1969)
{
printf("sono nato anni dopo di arrivo %d\n", a); 
}
else if (x < 1969)
{
    printf("sono nato anni prima %d\n", b);
}
else
{
printf("nato stesso anno arrivo");
}

}



