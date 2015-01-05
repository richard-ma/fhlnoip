CC=gcc
DEBUG=-g
LIBNAME=libarraylist.so.1.0.0

$(LIBNAME): arraylist.o
	$(CC) $(DEBUG) -shared arraylist.o -o $(LIBNAME)

arraylist.o: arraylist.c arraylist.h ../list.h
	$(CC) $(DEBUG) -c arraylist.c

.VIRTUAL: clean
clean:
	rm *.gch *.o $(LIBNAME)
