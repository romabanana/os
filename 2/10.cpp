#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(int argc, char *argv[]) {
	pid_t pid;
	int i;
	
	pid = fork();
	
	if(pid==0){
		for(i=0;i<10;i++){
			printf("Hijo: %d\n", i);
			sleep(1);
		}
		return 0;
	}
	else if (pid>0){
		for(i=0;i<10;i++){
			printf("Padre: %d\n", i);
			sleep(1);
		}
		return 0;
	}else{
		printf("No se pudio bifurcar");
	}
	return 0;
}

