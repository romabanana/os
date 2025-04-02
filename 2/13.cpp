#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (void){
  int i;
  int padre = 1;
  for (size_t i = 0; i < 3; i++) {
    if(padre == 1){
      if (fork() == 0) {
        printf("Proceso hijp PID:%d con padre PPID %d\n",
           getpid(), getppid());
        padre = 0;
      }
      else {
        printf("Proceso padre PID:%d\n", getpid());
        padre = 1;
      }
    }
    sleep(1);
  }
  return 0;
}
