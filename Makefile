CFLAGS=-Wall -g

all: 
	cc ex1.c  -o ex1
	cc ex3.c  -o ex3
	cc ex6.c  -o ex6

clean:
	rm -f ex1 ex3
