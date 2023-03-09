##
## EPITECH PROJECT, 2022
## B-CPE-101-BDX-1-1-myprintf-matteo.verdez
## File description:
## Makefile
##



NAME	= push_swap

CC	= gcc -g -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

RM	= rm -f

SRCS	=	./src/check_sorted_list.c \
			./src/main.c \
			./src/new_node.c \
			./src/pb_pa_sa.c \
			./src/swap_liste.c

OBJS	= $(SRCS:.c=.o)

LIB = -L ./lib/my/ -lmy

CFLAGS = -I ./include/

all: $(NAME)

$(NAME):	$(OBJS)
		make -C ./lib/my/
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)
		rm lib/libmy.a

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./lib/my/

re: fclean all

.PHONY: all clean fclean re
