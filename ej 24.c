#include<stdio.h>
#include <math.h>

int main (void) {

int rad;
float area;

printf ("ingrese el radio");
scanf ("%d", &rad);
area = (3.14 * (pow (rad, 2)));
printf ("su area es: %f", area);
return 0;

}
