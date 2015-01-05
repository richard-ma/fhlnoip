CC=gcc
DEBUG=-g
lFLAG=linklist
LFLAG=/usr/local/lib
IFLAG=/usr/local/include

all: test_linklist

test_linklist: test_linklist.o
	$(CC) $(DEBUG) -I$(IFLAG) -L$(LFLAG) -l$(lFLAG) \
		-o test_linklist \
		test_linklist.o

test_linklist.o: test_linklist.c
	$(CC) $(DEBUG) -c test_linklist.c

.VIRTUAL: clean
clean:
	rm *.o test_linklist
