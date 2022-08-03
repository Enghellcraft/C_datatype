#include <stdio.h>


int main(void){

int x;      // falta ingresar el tipo de variable correcto: int
float y;         // falta ingresar el tipo de variable correcto: float

scanf("%D", &y);  //falta amperson antes de la variable
printf("%f",x);  //falta amperson antes de la variable

return 0;
}


#include <stdio.h>

int main(){

int n,total;
float promedio;  //falta un scanf para total que no esta inicializado

n=0;
promedio=total/n;

printf("El promedio es: %f\n",promedio);
return 0;
}
