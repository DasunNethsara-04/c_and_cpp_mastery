# set the compiler
CC = gcc

# set the compiler flags
CFLAGS = -Wall -Wextra -g

# set the output file name
TARGET=calc

# set the source file
SRC=app.c


# set the rules to build the final executable file
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)


# rules to cleanup compiled files
clean:
	rm -f $(TARGET)
