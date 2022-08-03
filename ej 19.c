#include<stdio.h>

int main (void){

int l1, l2, per, sup;

printf ("ingrese el valor del lado mas pequeño \n");
scanf ("%d", &l1);
printf ("ingrese el valor del lado mas grande \n");
scanf ("%d", &l2);
per = ((l1 * 2) + (l2 * 2));
sup = (l1 * l2);
printf ("su perimetro es: %d, y su superficie es: %d", per, sup);
return 0;
}
