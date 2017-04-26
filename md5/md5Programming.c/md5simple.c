#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char ** argv )
{
	for( int i = 1; i < argc; i++) {
		char file[256];
		snprintf(file, sizeof file, "%s%s", "md5sum ", argv[i]);
		system(file);
	}
}

