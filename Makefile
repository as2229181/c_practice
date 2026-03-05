CC = gcc
CFLAGS = -Wall -Wextra -g

SRCS = determineTriangle.c isIsoscelesTriangle.c isRegularTriangle.c isRightTriangle.c
OBJS = $(SRCS:.c=.o)
EXEC = check_triangles

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
