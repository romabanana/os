#include <stdio.h>

#include <unistd.h>
#include <sys/types.h>

int main()
{
	fork();
	fork();
	fork();
	printf("FICH\n");
	return 0;
}

