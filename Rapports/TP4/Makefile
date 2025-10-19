CC = gcc
CFLAGS = -Wno-implicit-function-declaration
EXEC = main

all: $(EXEC)
	@chmod +x $(EXEC)
	@./$(EXEC)

$(EXEC): main.o functions.o
	@$(CC) $(CFLAGS) main.o functions.o -o $(EXEC)

main.o: main.c
	@$(CC) $(CFLAGS) -c main.c -o main.o

functions.o: functions.h functions.c
	@$(CC) $(CFLAGS) -c functions.c -o functions.o

clean: $(EXEC)
	@rm -f $(EXEC) *.o
