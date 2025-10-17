CC = gcc
CFLAGS = -Wno-implicit-function-declaration
TARGET = main

all: $(TARGET)
	@chmod +x $(TARGET)
	@./$(TARGET) John

main: print_message.o main.o
	@$(CC) $(CFLAGS) print_message.o main.o -o $(TARGET)

print_message.o: print_message.c
	@$(CC) $(CFLAGS) -c print_message.c -o print_message.o

main.o: main.c
	@$(CC) $(CFLAGS) -c main.c -o main.o

clean:
	@rm -f $(TARGET) *.o
