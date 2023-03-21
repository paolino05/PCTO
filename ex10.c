#include <stdio.h>

int main()
{
int x;
printf("inserisci un anno");
scanf("%d", &x);

if((x%4==0  && x%400==0) || x%400==0)
{
 printf("è un anno bisestile");
}
else 
{
    printf("non è bisestile");
}

}

