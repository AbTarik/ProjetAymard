CC = gcc
CFLAGS = -Wno-implicit-function-declaration
EXEC = main
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)
	@chmod +x $<
	@./$<

$(EXEC): $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $@

main.o: main.c

functions.o: functions.c

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY : clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)
