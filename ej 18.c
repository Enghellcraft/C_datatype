#include<stdio.h>

int main (void){

int grad1, grad2, grad3;

printf ("ingrese los grados del primer angulo \n");
scanf ("%d", &grad1);
printf ("ingrese los grados del segundo angulo \n");
scanf ("%d", &grad2);
grad3 = (180 - (grad1 + grad2));
printf ( "el tercer angulo es de: %d", grad3);
return 0;
}
