
/*
 Author: James Fraser
 Date: June 10th 
 Purpose: Demonstrate some basic testing concepts
 
 University of Guelph, 2016.
 CIS*2520 (DE) S16
*/

#include "array.h"


int main(int argc, char ** argv)
{
	// Don't really have a task here.
	// So add a couple of numbers,print, and leave.
	// This is not testing the array, it's using it.
	Array * arr = createArray(3);
	modifyValue(arr,0, 10);
	modifyValue(arr,2, 390);
	modifyValue(arr,1, 222);

	printArray( arr );
	printf("\n\n");
	
	destroyArray( &arr );

	printf("\nPrint array again:");
	printArray(arr);
	printf(":\n");

	return 0;
}	
