CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = todo
SRC = main.c
LIBS = "utils/common.c" "utils/todo.c"

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LIBS)

asm:
	$(CC) $(SRC) -S -o $(TARGET).s

del_db:
	rm -f books.txt

clean:
	rm -f $(TARGET)