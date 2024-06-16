#include <stdio.h>
#include "main.h"

/**
 *
 */


void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	        for (int i = 0; i <= n; i++){
			for (int j = 0; j <= n; j++){
				if (j == 0){
                                	printf("%d", i * j);
                        	}
				else{
					printf(", %3d", i * j);
				}
                	}
        	}
		printf("\n");
	}
}
