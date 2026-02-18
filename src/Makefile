CC = gcc
CFLAGS = -Wall

app: main.o filelib.o
	$(CC) $(CFLAGS) -o app main.o filelib.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

filelib.o: filelib.c
	$(CC) $(CFLAGS) -c filelib.c

run: app
	./app

clean:
	rm -f *.o app