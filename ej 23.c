#include<stdio.h>
int main (void ) {

int h1, m1, s1, h2, s2, m2;

printf("ingrese las horas primeras");
scanf ("%d", &h1);
printf("ingrese los minutos primeros");
scanf ("%d", &m1);
printf("ingrese los segundos primeros");
scanf ("%d", &s1);
printf("ingrese las horas segundas");
scanf ("%d", &h2);
printf("ingrese los minutos segundos");
scanf ("%d", &m2);
printf("ingrese los segundos segundos");
scanf ("%d", &s2);

printf ("su total de horas es: %d, minutos: %d, segundos: %d", h1 + h2, m1 + m2, s1 + s2);

return 0;


}
