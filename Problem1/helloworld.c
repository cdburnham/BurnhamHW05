// "helloworld.c" developed by Cameron Burnham, on Mar. 6, 2025.
// Purpose of this program is to print "Hello World!" as many times as
// the first argument details.
// To invoke, run "gdb helloworld", set breakpoints if necessary,
// and execute using "run (int, times to print statement)". 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	if(argc != 2){
	
		printf("The program expects one command line argument\nPlease supply one argument of (int) type to run.\n");
		return 1;

	} else {

		int limit = atoi(argv[1]);	

//		printf("The limit is: %d",limit); used for debugging purposes.

		for(int i = 0; i < limit; i++){
			printf("Hello World!\n");
		}

	}

return 0;
}
