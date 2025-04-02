
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){
  int i;
  printf("Inicio\n");
  for (size_t i = 0; i < 4; i++) {
    if(fork()==0)
      break;
  }

  sleep(30);
  return 0; 
    
  

}
