#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){

	int mul = 1;
	int i = 1;

	if (argc == 1){
	
		printf("Error\n");
		return 1;
	}


	while (i < argc){
	
		mul *= atoi(argv[i]);
		i++;

	}

	printf("%d\n", mul);

	return 0;
}
