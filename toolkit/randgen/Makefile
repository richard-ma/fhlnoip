CC=gcc
CFLAGS=
OPTS=
LIBS=

randgen: randgen.o rand.o
	$(CC) -o randgen randgen.o rand.o

randgen.o: randgen.c
	$(CC) -c randgen.c

rand.o: rand.h rand.c
	$(CC) -c rand.c

clean:
	rm randgen
	rm -f *.o
