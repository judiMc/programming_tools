CC          =	gcc
# Flags that are sent to the compiler

CFLAGS      =	-Wall -std=c99 -pedantic -g

test:
	$(CC) $(CFLAGS) src/testMain.c src/array.c src/test.c -Iinclude -o bin/testMe

prog:
	$(CC) $(CFLAGS) src/main.c src/array.c  -Iinclude -o bin/runMe

clean:
	rm bin/*


