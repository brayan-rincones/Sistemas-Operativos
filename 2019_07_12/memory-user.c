#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv){
 // validar que se pasa un argumento
  if(argc < 2){
    printf("no se encontraron argumentos\n");
    return 1;
  }

 // convertir ese argumento a numero entero. Ese numero representa la cantidad en megabytes
  int bytes = atoi(argv[1]);
 // solicitar esa cantidad de megabytes al heap del 'adress space' y asignarlo a un arreglo
  int *array = malloc(bytes*1024*1024*(sizeof(int)));
  if(array == NULL){
    printf("memoria no asignada\n");
    exit(-1);
  }
 // iterar sobre el arreglo
  int i = 0;
  for(; i < bytes; i++)
    array[i] = i;
 // salir
  sleep(10);

  return 0;
}
