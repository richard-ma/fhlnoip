CC=gcc
DEBUG=-g
lFLAG=arraylist
LFLAG=/usr/local/lib
IFLAG=/usr/local/include

all: test_arraylist

test_arraylist: test_arraylist.o
	$(CC) $(DEBUG) -I$(IFLAG) -L$(LFLAG) -l$(lFLAG) \
		-o test_arraylist \
		test_arraylist.o

test_arraylist.o: test_arraylist.c
	$(CC) $(DEBUG) -c test_arraylist.c

.VIRTUAL: clean
clean:
	rm *.o test_arraylist
