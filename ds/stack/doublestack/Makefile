CC=gcc
DEBUG=-g
LIBNAME=libdoublestack.so.1.0.0

$(LIBNAME): doublestack.o
	$(CC) $(DEBUG) -shared doublestack.o -o $(LIBNAME)

doublestack.o: doublestack.c doublestack.h
	$(CC) $(DEBUG) -c doublestack.c

.VIRTUAL: clean
clean:
	rm *.o $(LIBNAME)
