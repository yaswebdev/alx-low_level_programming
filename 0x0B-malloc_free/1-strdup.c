#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>



char *_strdup(char *str){

	char *dub;
	int len;



	if(str == NULL){
	
		return NULL;
	}

	len = strlen(str) + 1;
	dub = (char *) malloc(len * sizeof(char));

	if(dub == NULL){
	
		return NULL;
	}

	strcpy(dub, str);
	return(dub);

	
}
