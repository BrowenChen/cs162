CC=gcc
CFLAGS=-I
binaries=main map wc

main: main.c 
	$(CC) -o main main.c -I.
map: map.c
	$(CC) -o map map.c -I.
wc: wc.c
	$(CC) -o wc wc.c -I.
clean: 
	rm -f $(binaries) *.o
	echo Clean done
