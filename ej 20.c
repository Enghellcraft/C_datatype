#include<stdio.h>
#include<math.h>

int main (void) {

float lado, sup, per;

printf ("ingrese la superficie");
scanf ("%f", &sup);
lado = sqrt(sup);
printf ("raiz es %f", lado);
per = (lado * 4);
printf ("su perim es %f", per);
return 0;
}
