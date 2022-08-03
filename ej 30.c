#include<stdio.h>
#include<math.h>

int main (void){

int rad, dist;
float area;

printf ("ingrese el radio \n");
scanf ("%d", &rad);
printf ("ingrese la dist \n");
scanf ("%d", &dist);

area = ((M_PI * (pow (rad, 2))) / 2) - ( ( dist * sqrt ( pow (rad, 2) + pow (dist, 2))) + ((pow (rad, 2))* asin (dist / rad)));
printf ("su area es: %f", area);

return 0;

}
