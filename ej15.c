#include<stdio.h>

int main (void) {

float cm, feet, inch;

printf ("ingrese los cm \n" );
scanf ("%f", &cm);
feet = (cm * 0.03);
inch = (cm / 0.39);

printf ("las pulgadas son %f y los pies son %f", feet, inch);

return 0;
}
