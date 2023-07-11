NAME   		= libftprintf.a
SRCS		= $(shell find . -name '*.c')
OBJS    	= $(SRCS:.c=.o)
INCS		= -I
RM			= rm -f
AR			= ar rcs
CC			= cc
FLAGS  		= -Wall -Wextra -Werror

.c.o: 
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
