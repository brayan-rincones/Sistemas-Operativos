#include <stdio.h>

int x;

int suma(int *x, int y){ // espera una direccion de memoria de una variable tipo entero
  int z;
  *x = *x + y; 
  z = *x;
  return z;  
}

int main(int argc, char** argv){
  int x1, y1;
  x1 = 4;
  y1 = 6;
  printf("suma: %d)\n", suma(&x1,y1));
 // printf("A: %d\n",a);
  return 0;
}
