/*  Purpose: This file purposely contains errors to be identified by Cppcheck.  
	File: main.c 
	University of Guelph, 2017.
*/
#include<stdio.h> 
#include<stdlib.h>
#include<string.h> 
#include<time.h>

/**This function does not and is not called.  
 *@pre No pre conditions  
 *@post No post conditions  
 *@param a void pointer that does nothing.
**/ 
void doNotRunMe(const void* vp) { return; }

int main(int argc, char ** argv) {   
	 // The following code purposely contains errors    
	// Ensure you can identify the same errors with gcc or Cppcheck.
    int * leakyPtr = malloc(sizeof(int) );  
	*leakyPtr = 5;
    printf("The value is : %d ", leakyPtr);
    printf("The value is : %d ", *leakyPtr);

    char * chptr = NULL;
    if( *leakyPtr == 5) {
		chptr = malloc(sizeof(char));
        chptr = 'b';
	}
    printf("ChPtr=%c", *chptr);
    return 0;
} 