#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
  int rc = fork();
  
  if (rc < 0) { // fork failed; exit
    fprintf(stderr, "fork failed\n");
    exit(0);
    
  } else if (rc == 0) { // child (new process)
    printf("hello, I am child (pid:%d)\n", (int) getpid());
    close(STDOUT_FILENO);
    printf("good bye");
    
  } else { // parent goes down this path (main)
    printf("hello, I am parent of %d (pid:%d)\n",rc, (int) getpid());
  }
return 0;
}
