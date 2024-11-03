CC = gcc  # C compiler
CCFLAGS = -O3
LDFLAGS = -lm

all:mmc

mmc: main.o matmul.o # compile object files into exe
        $(CC) -o mmc main.o matmul.o $(LDFLAGS)
matmul.o: matmul.c # compile c files into object file
        $(CC) -c $(CCFLAGS) matmul.c
main.o: main.c
        $(CC) -c $(CCFLAGS) main.c
clean:
        rm *.o