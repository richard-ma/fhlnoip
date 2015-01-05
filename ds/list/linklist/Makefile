CC=gcc
DEBUG=-g
LIBNAME=liblinklist.so.1.0.0

$(LIBNAME): linklist.o
	$(CC) $(DEBUG) -shared linklist.o -o $(LIBNAME)

linklist.o: linklist.c linklist.h ../list.h
	$(CC) $(DEBUG) -c linklist.c

.VIRTUAL: clean
clean:
	rm *.gch *.o $(LIBNAME)
