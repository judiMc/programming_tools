CC          =	gcc
# Flags that are sent to the compiler

CFLAGS      =	-Wall -std=c99 -pedantic -g

#Directories where the compiler can find things
INCLUDES    = -Iinclude

# add directory names here if you want to separate files by directories
BINDIR = bin/
SRCDIR = src/
OBJDIR = obj/

#Put the names of your source code file in the lines below.  
SOURCE = $(SRCDIR)test.c $(SRCDIR)array.c $(SRCDIR)testMain.c 
OBJS    = $(OBJDIR)test.o $(OBJDIR)array.o

#The names of the binary programs that will be produced.  
PROGNAME = $(BINDIR)arrayExample.out
PROGTEST = $(BINDIR)arrayTest.out

# This target (command) handles the basic make, creates a program with program Name
# NOte this  command doesn't actually build all, it build the main program only, ie not the tests.
all : $(OBJS) $(OBJDIR)main.o
	$(CC) $(OBJS) $(OBJDIR)main.o -o $(PROGNAME)

# This target (command) handles make test 
test: $(OBJS) $(OBJDIR)testMain.o
	$(CC) $(OBJS) $(OBJDIR)testMain.o -o $(PROGTEST)

# Below here are targets for *.o 
$(OBJDIR)array.o: $(SRCDIR)array.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCDIR)array.c -o $(OBJDIR)array.o 

$(OBJDIR)test.o: $(SRCDIR)test.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCDIR)test.c -o $(OBJDIR)test.o 

$(OBJDIR)testMain.o: $(SRCDIR)testMain.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCDIR)testMain.c -o $(OBJDIR)testMain.o 

$(OBJDIR)main.o: $(SRCDIR)main.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCDIR)main.c -o $(OBJDIR)main.o 

# This is another make command, run: make clean and it removes *.o and programs.
# You can make similar commands to perform different common actions.
clean:
	@ rm $(OBJDIR)*.o $(PROGNAME) $(PROGTEST)
