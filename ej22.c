#include <stdio.h>
#include <stdlib.h>
#define CUAD(x) (x*x) /* Definici�n de macros */
int main(){
float a;
printf("\nEscriba un n�mero: ");
scanf("%f",&a);
printf("\nSu cuadrado es: %.2f\n",CUAD(a));
getchar();
return 0;}

