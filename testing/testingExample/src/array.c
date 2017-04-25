/*
 Author: James Fraser
 Date: June 10th 
 Purpose: Demonstrate some basic testing concepts
 
 University of Guelph, 2016.
 CIS*2520 (DE) S16
*/

#include "array.h"

/****************************** Dummy Structure to show testing ******************************/
Array* createArray(int arraySize)
{
	Array* temp = NULL;

	temp = (Array*)malloc(sizeof(Array));
	if(temp == NULL)
		return NULL;

	temp->arr = NULL;
	temp->size = -1;

	if(arraySize >= 0)
	{
		temp->arr = (int*)malloc(sizeof(int)*arraySize);
		temp->size = arraySize;
	}

	return temp;
}

int positionExists(Array * array, int position)
{
	return (array && array->arr && array->size >= position && position >= 0 );
}

int getFirstValue(Array * array) 
{
	if(positionExists(array,1))
		return array->arr[0];
	// Option here because we've forceed a return type, we must decided what is a bad number
	// Could be -1,more like should be MAX_INT
	return -1;
}

void modifyValue(Array * array, int position, int newValue )
{
	if( positionExists(array,position) )
		array->arr[position] = newValue;
}

int getLength( Array * arr )
{
	return arr != NULL ? arr->size : 0;
}

void printArray( Array * array )
{
	// Handle bad cases where array is printable.
	if(array == NULL || array->size < 0)
	{
		printf("List provided is null.\n");
		return ;
	}
	// Prints an integer array.
	for( int i = 0; i<array->size; i++)
	{
		printf("%d ", array->arr[i] );
	}
}

void destroyArray(Array ** array)
{
	// These checks avoid double free errors.
	// Notice we reset variables to 0 and NULL
	if( (*array) )
	{
		if((*array)->size >= 0)	
		{
			free((*array)->arr);
			(*array)->arr = NULL;
		}

		(*array)->size = 0;

		free(*array);
		*array = NULL;
	}

}

