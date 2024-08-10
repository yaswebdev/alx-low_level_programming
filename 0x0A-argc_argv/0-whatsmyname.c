#include <unistd.h>
#include <stdio.h>



int _ft_print_argv_element(int argc, char *argv[]){

	int i;
	i = 0;

	while (i < argc){
	
		printf("%s\n", argv[i]);
		i++;

		}
	return 0;

	}


int main(int argc, char *argv[]){

	_ft_print_argv_element(argc, argv);
	return 0;
}
