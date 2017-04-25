/**
 Description: This program demonstrates basic usage of command line arguments
 University of Guelph, 2017	
**/

#include<stdlib.h>
#include<stdio.h>


int main( int argc, char ** argv ) 
{
	/* Argc is the argument counter
	   It indicates the number of passed in parameters.

	   Argv is the actual parameters being passed in.	

	   Note that the first argument (argv[0]) is the program name.	
	*/

	if( argc == 1 ) {
		printf("Describe what your program does here\n");
		printf("What arguments does your program require\n");
		return 0;
	}

	if( argc > 1 && argc < 4) {
		// The first parameter is the program being run 
		char * programName = argv[0];
		printf("Here is what you ran: %s\n", programName );
		
		// Your first parameter is a filename
		char* filename = argv[1];
	
		// The second parameter is an integer
		int someNumber = atoi(argv[2]);

		printf("InputFile: %s\n", filename);
		printf("Number: %d\n", someNumber);
	}
	else {
		// You should check to make sure you get all the intended arguments.
		// More args could  harmless but could also be a bad sign.
		printf("An invalid number of arguments. Please see the description");
	}	
	return 0;
}
