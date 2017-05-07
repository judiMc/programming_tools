#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main( int argc, char ** argv ) {

	float n = 10.345;

	printf("Value %.1lf\n", n );
	printf("Floor %.1lf\n", floor(n) );
	printf("Ceil %.1lf\n", ceil(n) );
	printf("Round %.1lf\n", round(n) );

	return 0;
}

