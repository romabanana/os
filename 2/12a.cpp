#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
  pid_t pid;
  unsigned int i, j, a, v[50000];
  for(i = 0; i<50000 - 1; i++){
    v[i]=i*i;
  }

  pid = fork();
  
  if (pid == 0){
  
    printf("\nInicio\n");
    for(i = 0; i < 50000 - 1; i++){
      for(j = i + 1; j < 5000; j++){
        if(v[i]<v[j]){
          a = v[i];
          v[i] = v[j];
          v[j] = a;
        }
      }
    }

    printf("\nOrdenamiento terminado! \n\n");
    return 0;
  }
  else{  
    execlp("/bin/ls", "ls", NULL);
    return 0;
  }


}
