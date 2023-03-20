#include <stdio.h>

int main ()

{

int x;
int y;

printf("inserisci un numero");
scanf("%d", &x);
printf("x: %d\n", x);
printf("inserisci un altro numero");
scanf("%d", &y);
printf("y: %d\n", y);

if(x%y==0)
{
    printf("x è multipla di y");
}

else(x%y!=0);
{
    printf("x non è multipla di y");

}


}
