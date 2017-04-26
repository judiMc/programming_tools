/*
 Author: James Fraser
 Date: June 10th 
 Purpose: Simple Structure for testing. 
 
 University of Guelph, 2016.
 CIS*2520 (DE) S16
*/

#ifndef SIMPLE_TEST_STRUCTURE_
#define SIMPLE_TEST_STRUCTURE_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/* Simple structure simpilar to that of an array */
/* Array is a simple test structure to provide an example for testing purpose.
   int* arr => contains the data in the array.
   int size => indicates the size of the array.
*/
typedef struct simpleStruct
{
	int * arr;
	int size;
} Array;

/*
 Summary: Creates an array initialized to a specific size.
 Pre: 0 or a positive number provided.
 Post: If unable to create NULL returned, else an integer array of size is created.
*/
Array* createArray(int arraySize);

/*
 Summary: Check if a position is valid within an array 
 Pre: None
 Post: returns 0 if position doesn't exist, 1 if valid.
*/
int positionExists(Array * array, int position);

/*
 Summary: Returns the integer value at the start of the array 
 Pre: Given an array
 Post: Returns -1 if invalid array size or value at first position of array.
*/
int getFirstValue(Array * array); 

/*
 Summary: Modifies a value at a specific position in the array, if it exists.
 Pre: Given an array, a potential position in the array and a new value.
 Post:if invalid position array remains the same. Else, array value at position is changed to newValue 
*/
void modifyValue(Array * array, int position, int newValue );

/*
 Summary: Returns the length or size of the array 
 Pre: None
 Post: 0 or the length of the array is provided
*/
int getLength( Array * arr );

/*
 Summary:Prints the integer array 
 Pre: None
 Post:Array has been printed to the console. 
*/
void printArray( Array * array );

/*
 Summary: Destorys the array and frees the memory.
 Pre: None
 Post:Array has been destroyed and any memory used has been returned. 
*/
void destroyArray( Array** array);

#endif // End the Simple Structure

