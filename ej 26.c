#include<stdio.h>
#include<math.h>

int main (void) {

int  hr, min, seg;
float ingreso;

printf ("ingrese los segundos");
scanf ("%f", &ingreso);

seg = ((ingreso/60)-(int)(ingreso/60))*60 ;

min = (((ingreso/60)/60)-(int)((ingreso/60)/60))*60;

hr = (int)(ingreso/60)/60;

printf ("horas: %d, minutos: %d, segundos: %d", hr, min, seg);

return 0;

}
