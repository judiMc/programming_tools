

/*
 Author: James Fraser
 Date: June 10th 
 Purpose: Demonstrate some basic testing concepts
 
 University of Guelph, 2016.
 CIS*2520 (DE) S16
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(int argc, char ** argv)
{
	// Case 1
	int * p = NULL;

	printf("This main is about to segfault\n");
	printf("%d",*p);

	return 0;
}	
