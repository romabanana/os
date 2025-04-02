
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

 int num, pid;
 for (num = 1; num <= 3; num++) {
   pid = fork();
   if ((num == 3) && (pid==0)){
     printf("\n");
     execlp("ls", "ls", "-l", NULL);
   
   }
   wait(NULL);
 }
 return 0;
}
