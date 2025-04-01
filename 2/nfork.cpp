#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	for (int i=0; i<n; i++){
		fork();
		if(i==n-1) printf("FUCH\n");
	}
	return 0;
}
