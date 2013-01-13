NAME	=	libid.a
SRC	=	id_printchar.c		\
		id_printstr.c		\
		id_printnbr.c		\
		id_atoi.c		\
		id_strlen.c		\
		id_strcmp.c		\
		id_is_in_charset.c	\
		id_trim.c		\
		id_strcpy.c
CFLAGS	=	-W -Wall -Werror
CC	=	gcc
OBJ	=	$(SRC:.c=.o)
AR	=	ar
RANLIB	=	ranlib

all:	$(NAME)

$(NAME):	$(OBJ)
	$(AR) r $(NAME) $(OBJ)
	$(RANLIB) $(NAME)

clean:
	rm -f $(OBJ)

distclean:	clean
	rm -f $(NAME)

rebuild:	distclean all
