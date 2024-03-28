#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define SCALAR double
#define BIG_NUMBER 1.e20
#define SMALL_NUMBER 1.e-20
 

void main(void){
SCALAR wyrazy = BIG_NUMBER;
SCALAR suma = 0;

//szereg
SCALAR x=0;
do{
x += SMALL_NUMBER;
suma += x;
}
while(x>0 && x<1);

printf("%f", suma);

}
