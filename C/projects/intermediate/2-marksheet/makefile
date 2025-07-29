CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = marksheet
SRC = app.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

asm:
	$(CC) $(SRC) -S -o $(TARGET).s

del_db:
	rm -f marksheet.txt

clean:
	rm -f $(TARGET)