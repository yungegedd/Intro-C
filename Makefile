TARGET = main
SRC = main.c
CC = gcc
CFLAGS = -Wall -Wextra -g
all: $(TARGET)
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
run: $(TARGET)
	./$(TARGET)
clean:
	rm -f $(TARGET)	