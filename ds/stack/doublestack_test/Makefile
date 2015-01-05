CC=gcc
DEBUG=-g
lFLAG=-ldoublestack -larraylist
LFLAG=/usr/local/lib
IFLAG=/usr/local/include

all: test_doublestack

test_doublestack: test_doublestack.o
	$(CC) $(DEBUG) -I$(IFLAG) -L$(LFLAG) $(lFLAG) \
		-o test_doublestack \
		test_doublestack.o

test_doublestack.o: test_doublestack.c
	$(CC) $(DEBUG) -c test_doublestack.c

.VIRTUAL: clean
clean:
	rm *.o test_doublestack
