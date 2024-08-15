# Variables
CC = gcc
CFLAGS = -Wall -g -I./Include
SRC = 	main.c \
		test.c
OBJ = $(SRC:.c=.o)
TARGET = myprogram
RM	= rm -f

LIB_SRC = ./Include/sources/mylib.c
LIB_OBJ = $(LIB_SRC:.c=.o)
LIBRARY = libmylib.a

# Default target
all: $(TARGET)

$(LIBRARY): $(LIB_OBJ)
		ar rcs $@ $^

# Linking
$(TARGET): $(OBJ) $(LIBRARY)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) -L. -lmylib

# # Compilation
# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@ 

# Clean up
clean:
	$(RM) $(OBJ) $(LIBRARY)

fclean: clean
	$(RM) $(TARGET)

# Rebuild
rebuild: fclean all
