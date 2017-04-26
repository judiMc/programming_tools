#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>
 
int main( int argc, char ** argv )
{
    unsigned char digest[MD5_DIGEST_LENGTH];

    // This is a single string but it could be the contents of a file.
    char string[] = "This works for a string, load and read a file could also work";

    // Take the string contents and run MD5 algorithm, result is stored in digest array.     
    // MD5 is a hash function, so this will be a 128-bit hash value
    MD5((unsigned char*)&string, strlen(string), (unsigned char*)&digest);    

	// Alternatively, instead of this constructor you can separate the steps for MD5
	// Create an MD5 context
	//MD5_CTX ctx;

	// Initialize the context
    //MD5_Init(&ctx);

	// Add the string to the context
    //MD5_Update(&ctx, string, strlen(string));

	// Create the hash value using MD5 algorithm
    //MD5_Final(digest, &ctx);
	
    // Load MD string with contents of digest array
    // 8 bit char * 16 = 128 bit
    // Note: %02x refers to 2 digits in hexadecimal format.
    // For the conversion into char 
    char mdString[33];
    for(int i = 0; i < 16; i++)
         sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);

    printf("md5 digest: %s\n", mdString);
 
    return 0;
}
