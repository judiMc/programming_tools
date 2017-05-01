#include<stdio.h>

typedef struct {
	int x,y;
} Point2D; 

int main( int argc, char ** argv ) {
	
	FILE * file = NULL;
	Point2D pt;

	file = fopen("testFile.bin", "rb");

	if( !file ) {

		// If the testFile bin does not already exist populate it wth some data.

		file  = fopen("testFile.bin", "wb");

		// Return can't read or write
		if(!file){
			printf("Unable to read or write file.");
			return 1;
		}

		for( int i = 0; i < 5; i++ ) {
			pt.x = i;
			pt.y = i * 3;
		
			fwrite(&pt,sizeof(Point2D), 1, file);
		}

		printf("Testfile.bin has been written, it's a binary file. Open it with a text editor to see it's not readable\n");
		printf("rerun this program, to view the data was created in binary.\n");


	}
	else {
		// Read all of the examples and print
		for( int i = 0; i < 5; i++ )
		{
			fread(&pt, sizeof(Point2D), 1, file );
			printf("Data was read: %d %d\n", pt.x, pt.y );
		}

		printf("**********************Seek File position\n");

		// Print a specific example, seek a specific position in the file
		// The read from that position
		fseek(file,sizeof(Point2D)*2, SEEK_SET);
		fread(&pt, sizeof(Point2D), 1, file );
		printf("Data was read: %d %d\n", pt.x, pt.y );

		printf("**********************Rewind File\n");


		// Print the first value again, because we've rewound the file.
		rewind(file);
		fread(&pt, sizeof(Point2D), 1, file );
		printf("Data was read: %d %d\n", pt.x, pt.y );

	}

	fclose(file);
	
	return 0;
}
