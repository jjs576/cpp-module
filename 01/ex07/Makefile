NAME = replace

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c+98

SRCS = replace.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
	rm -f *.replace

re : fclean all

.phony : all fclean clean re
