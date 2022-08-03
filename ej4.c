#include<stdio.h>

int main (void) {

int a, b, c, d = 0;
int e = 1; /*0 (cero) corresponde a falso*/
int x = 2, y = 3;

a = 5 > 3; //1
b = ( ( 4 < 5 ) && ( 2 > 2 ) ); //0
a = ! e; //1
b = ( ( x % 2 == 0 ) || ( x – y < 10 ) );
c = ( d && e );
c = ( d || e );
c = ! ( d && e );
c = ( ! d ) && ( ! e );
c = ( a && ( ! a ) );
c = ( ( ( x <= ( y * 3.2 ) ) && ( y % 2 != 0 ) ) || ( 1 ) );


}




