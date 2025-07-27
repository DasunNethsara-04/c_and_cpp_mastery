CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = quiz
SRC = app.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# generates the Assembly instruction of the program
asm:
	$(CC) $(SRC) -S -o $(TARGET).s

clean:
	rm -f $(TARGET)