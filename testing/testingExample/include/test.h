#ifndef TEST_HELPERS_H
#define TEST_HELPERS_H
/*
 Author: James Fraser
 Date: June 10th 
 Purpose: Demonstrate some basic testing concepts
	  This file contains some helper functions for making tests look a specific way.
 
 University of Guelph, 2016.
 CIS*2520 (DE) S16
*/

/******************************* NOTE: **********************************************
  Do not use these functions, create your own, these are to provide an idea  of 
  printing your tests with a consistent structure but can be improved.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/*
 Summary: Prints whether result passed or failed a test.
 Pre: None
 Post: Statement is printing depending on the value of result, result is returned.
*/
int printPassFail( const int result );


/*
 Summary: Prints basic information about what expectation and result of a test. Only works for  strings.
 Pre: None
 Post: Introduction Statement is printed, result printed depends on the value of result.
*/
void printTestIntroInfo( int testNumber, const char *intro);

/*
 Summary: Creats a message wrapped in star(*) for menu-type feel 
 Pre: None
 Post: Statement is printed encapsulated by *
*/
void printStatement( const char * statement );

#endif //Ending TEST_HELPERS_H
