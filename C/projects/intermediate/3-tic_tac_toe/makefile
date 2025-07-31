CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = game
SRC = app.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

asm:
	$(CC) $(SRC) -S -o $(TARGET).s

clean:
	rm -f $(TARGET)