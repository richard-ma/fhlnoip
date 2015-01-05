CC=gcc
DEBUG=-g
LIBNAME=libcirclequeue.so.1.0.0

$(LIBNAME): circlequeue.o
	$(CC) $(DEBUG) -shared circlequeue.o -o $(LIBNAME)

circlequeue.o: circlequeue.c circlequeue.h
	$(CC) $(DEBUG) -c circlequeue.c

.VIRTUAL: clean
clean:
	rm *.o $(LIBNAME)
