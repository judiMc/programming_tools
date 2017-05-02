#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char ** argv )
{
	for( int i = 1; i < argc; i++) {
		char path[256];
		snprintf(path, sizeof path, "%s%s", "ls  ", argv[i]);
		system(path);
	}
}

