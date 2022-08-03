#include<stdio.h>
#include<math.h>

int main (void) {

int cat1, cat2;
float hip;

printf ("ingrese un valor de cateto");
scanf ("%d", &cat1);
printf ("ingrese un valor de cateto");
scanf ("%d", &cat2);
hip = (sqrt ( (pow (cat1, 2)) + (pow (cat2, 2))));
printf ("su hipot es de: %f", hip);
return 0;

}
