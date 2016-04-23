CC=gcc
# valgrind ./main
# CFLAGS=-Iheaders -Wall -O0 -lm -g
# gprof ./main
# CFLAGS=-Iheaders -Wall -O2 -lm -pg
# development
CFLAGS=-Iheaders -Wall -O2 -lm -finline-functions
OBJ=src/b-tree.o
MAIN=src/main.o $(OBJ)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(MAIN)
	$(CC) -o $@.out $^ $(CFLAGS)

clean:
	rm -f src/*.o
