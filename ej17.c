#include<stdio.h>

int main (void) {

int kg, price, total;

printf ("ingrese precio por kilo \n");
scanf ("%d", &price);
printf ("ingrese kilos comprados \n");
scanf ("%d", &kg);
total = (kg * price);
printf ("su total es de: %d ", total);

}
