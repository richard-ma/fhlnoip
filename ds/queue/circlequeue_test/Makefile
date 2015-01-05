CC=gcc
DEBUG=-g
lFLAG=-lcirclequeue -larraylist
LFLAG=/usr/local/lib
IFLAG=/usr/local/include

all: test_circlequeue

test_circlequeue: test_circlequeue.o
	$(CC) $(DEBUG) -I$(IFLAG) -L$(LFLAG) $(lFLAG) \
		-o test_circlequeue \
		test_circlequeue.o

test_circlequeue.o: test_circlequeue.c
	$(CC) $(DEBUG) -c test_circlequeue.c

.VIRTUAL: clean
clean:
	rm *.o test_circlequeue
