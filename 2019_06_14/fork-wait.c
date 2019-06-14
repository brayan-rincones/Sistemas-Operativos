#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
este programa en c debe imprimir lo siguiente:

soy el hijo y mi identificador es 34567
soy el padre, mi identificador es 34566 y el de mi hijo es 34567

Usar 'getpid()'
*/


int main(int argc, char** argv){
  pid_t pid;

  pid = fork();
    if(pid==0){
    sleep(3);
    printf("soy el hijo, mi identificador es %d\n",(int) getpid());
  } else {
    int status;
    pit_t pid2;
    //wait(&status); //direccion de memoria, para poder cambiar variable
    pid2 = wait(NULL);
    printf("Termino mi hijo %d\n",pid2);
    //printf("soy el padre y mi identificador es %d y el de mi hijo es %d\n",getpid(),pid);
  }
}
