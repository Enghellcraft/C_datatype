#include<stdio.h>

int main (void) {

int x = 2;
int y = 6;
int z = 9;
 int r = 100;
int s = 10;
int a = 15;
int b = 3;

     x += 10; //12
     s *= b; //30
      r /= 0; //error
    y += x + 10; //
    z -= a*b; //-36

printf ("%d" , x);
printf ("%d", s );
        printf ("%d ", r );
                printf ("%d" , y );
                        printf ("%d" , z);
return 0;
}
