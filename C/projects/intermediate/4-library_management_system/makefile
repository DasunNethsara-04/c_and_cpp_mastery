CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = library
SRC = app.c
LIBS = "utils/user.c" "utils/book.c"

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LIBS)

asm:
	$(CC) $(SRC) -S -o $(TARGET).s

del_db:
	rm -f books.txt

clean:
	rm -f $(TARGET)