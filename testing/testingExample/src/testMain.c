/*
 Author: James Fraser
 Date: June 10th 
 Purpose: Demonstrate some basic testing concepts
 
 University of Guelph, 2016.
 CIS*2520 (DE) S16
*/

#include"test.h"
#include"array.h"


int main(int argc, char ** argv)
{
	
	int testNumber = 0;	
	int testsPassed = 0;
	/****************************** Testing section ******************************/
	printStatement("Start Testing Section");

	// Test Number 1
	/* This is a simple test, it shows that you should validate the response.
           We could even check if *p == 101 to validate.
	   What does this test, that the int pointer, points to the correct value.
	   That the dereference operator works.  

	   This test is not testing any part of the array library, it is just here to
	   demonstrate a simple test case to you.
	*/
	
	int num = 101;
	int *p = &num;	
	printTestIntroInfo(testNumber++, "Testing whether pointer and number have the same value.");
	printf("Expected:%d\n", num);
	printf("Received:%d\n", *p);
	testsPassed += printPassFail(num == *p);
	printStatement("*");

	// Test Section 2
	/* Tests similar to what you might want to perform. 
	*/

	/*
	   This is NOT a complete list of tests, it is meant to demonstrate some testing.
           Try to find the right balance between testing, as testing can time consuming and can be overused if not mission crittical.

           A good balance is testing each function for your data structure. Test with expected data and what 
           are known as edge cases, where the code might break. 
	
 	  Most importantly check creating and destroying your structures aren't creating memeory leaks.
       */

	// Consider invalid input, this is an edge case that might break the code but will still compile.
	Array * arr = createArray(-1);
	printTestIntroInfo(testNumber++, "Testing invalid array size"); 
	printf("Expected:%d\n", 1);
	printf("Received:%d\n", arr->arr == NULL);
	testsPassed += printPassFail( arr->arr == NULL );
	destroyArray(&arr);

	// Consider array of 0 size, what happens in this situation.
	arr = createArray(0);
	printTestIntroInfo(testNumber++, "Testing valid 0 array size"); 
	printf("Expected:%d\n", 1);
	printf("Received:%d\n", arr != NULL);
	testsPassed += printPassFail( arr != NULL );
	destroyArray(&arr);
	

	//Consider Array with 5 elements, a more practical test set.
	const int testSize = 5;
	arr = createArray(testSize);
	printTestIntroInfo(testNumber++, "Testing array not-null"); 
	printf("Expected:%d\n", (int)sizeof(int)*testSize);
	printf("Received:%d\n", arr->arr ? (int)sizeof(arr->arr[0])*testSize : 0 );
	testsPassed += printPassFail( arr != NULL );

	printTestIntroInfo(testNumber++, "Testing array has integer space, this test should fail."); 
	printf("Expected:%d\n", (int)sizeof(int));
	printf("Received:%d\n", arr->arr ? (int)sizeof(arr->arr): 0 );
	testsPassed += printPassFail( arr->arr != NULL && (int)sizeof(arr->arr)== (int)sizeof(int));
	
	printTestIntroInfo(testNumber++, "Testing array has proper size"); 
	printf("Expected:%d\n", testSize);
	printf("Received:%d\n", arr->arr ? arr->size :  0 );
	testsPassed += printPassFail( arr->size  == testSize );

	const int firstValue = 10;
	printTestIntroInfo(testNumber++, "Testing modifying one of the positions of the array.");
	printf("Expected:%d\n", firstValue);
	modifyValue(arr,0,firstValue);
	const int received = getFirstValue(arr);
	printf("Received:%d\n", received); 
	testsPassed += printPassFail( received == firstValue ); 

	printTestIntroInfo(testNumber++, "Testing array bounds, this test should fail.");
	printf("Expected:%d\n", -1);
	printf("-1 Position Received:%d\n", positionExists(arr,-1) );
	printf("testSize+1 Received:%d\n", positionExists(arr,testSize+1) );
	const int positionsValid = positionExists(arr,-1) > 0 || positionExists(arr,testSize+1) > 0;  
	printf("Received:%d\n", positionsValid ); 
	testsPassed += printPassFail( positionsValid != 0); 
	destroyArray(&arr);

	printStatement("More ex tests.\n");
   	printf("\tdoes destroyArray actually make the array NULL:\n");
   	printf("\tWhat about modifValue at the end of the array, or when given improper index.:\n");
   	printf("\tWhat about printing the array, I haven't validated that either..:\n");
	
	/****************************** End Testing ******************************/
	printStatement("\nEnding Testing Section");

	return 0;
}
