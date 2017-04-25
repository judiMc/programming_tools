/*
 Author: James Fraser
 Date: June 10th 
 Purpose: Demonstrate some basic testing concepts
 
 University of Guelph, 2016.
 CIS*2520 (DE) S16
*/

#include "test.h"

int printPassFail( const int result )
{
	if( result )
		printf("Result:Passed\n\n");
	else
		printf("Result:Failed\n\n");
	return result;
}

void printTestIntroInfo( int testNumber, const char *intro)
{
	printf("Test #%d\n", testNumber);
	printf("Testing: %s\n", intro );
}

void printStatement( const char * statement )
{
	printf("************************** %s **************************\n",statement); 
}

