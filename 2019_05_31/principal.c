#include <stdio.h>
#include "entero.h"

int main(int argc, char** argv){
  entero a,b;

  a=10;
  b=6;
  printf("la suma de %d + %d es %d\n",a,b,(int)suma(a,b));
  printf("la resta de %d - %d es %d\n",a,b,(int)resta(a,b));
  printf("la multiplicacion de %d * %d es %d\n",a,b,(int)multi(a,b));
  printf("la suma de %d / %d es %f\n",a,b,(float)divi(a,b));
}


