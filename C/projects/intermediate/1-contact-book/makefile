CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = contacts
SRC = app.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

asm:
	$(CC) $(SRC) -S -o $(TARGET).s

del_db:
	rm -f contacts.txt

clean:
	rm -f $(TARGET)