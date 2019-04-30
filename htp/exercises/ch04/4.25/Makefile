main.out: binary.o main.o
	cc -Wall -g -o main.out binary.o main.o

main.o: main.c binary.h
	cc -Wall -g -c main.c

binary.o: binary.c binary.h
	cc -Wall -g -c binary.c

clean:
	rm -f main.out main.o binary.o
