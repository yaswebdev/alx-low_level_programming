#include <unistd.h>
#include "main.h"





int _sqrt_recursion(int n){

	int sqrt;
	
	
	if (n == 0 || n == 1){
	
		return n;
	}

	if (n < 0){
	
		return -1;
	}

	sqrt = _sqrt_recursion(n - 1);

	if (sqrt * sqrt == n){
	
		return sqrt;
	}

	else if (sqrt * sqrt > n){
	
		return sqrt - 1;
	}

	else {
	
		return sqrt + 1;
	}
}
