NAME = phonebook

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = ./Contact.cpp ./Phonebook.cpp ./main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY : bonus all clean fclean re
