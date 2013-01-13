NAME	=	id_irc
LIBID	=	libid/libid.a
SRCS	=	run.c						\
		main.c						\
		init.c						\
		user.c						\
		nick.c						\
		oper.c						\
		ping.c						\
		pong.c						\
		mode.c						\
		quit.c						\
		join.c						\
		part.c						\
		clean.c						\
		debug.c						\
		topic.c						\
		names.c						\
		client.c					\
		buffer.c					\
		parser.c					\
		logged.c					\
		server.c					\
		fd_fct.c					\
		builtin.c					\
		privmsg.c					\
		service.c					\
		channel.c					\
		message.c					\
		exec_join.c					\
		socket_fct.c					\
		read_client.c					\
		mode_client.c					\
		answer_join.c					\
		answer_names.c					\
		write_client.c					\
		mode_channel.c					\
		client_utils.c					\
		channel_utils.c					\
		delete_client.c					\
		handle_command.c				\
		end_names_list.c				\
		read_local_server.c				\
		message_builder/build_cmd.c			\
		message_builder/make_myinfo_message.c		\
		message_builder/make_welcome_message.c		\
		message_builder/make_privmsg_message.c		\
		message_builder/make_created_message.c		\
		message_builder/build_cmd_user_prefix.c		\
		message_builder/make_yourhost_message.c		\
		message_builder/make_youreoper_message.c	\
		message_builder/make_usermodeis_message.c	\
		message_builder/make_luserclient_message.c	\
		message_builder/make_nicknameinuse_message.c	\
		message_builder/make_needmoreparams_message.c
OBJS	=	$(SRCS:.c=.o)
LIBS	=	-L./libid/ -lid
CC	=	gcc
CFLAGS	+=	-W -Wall -Werror
AR	=	ar
RANLIB	=	ranlib

all:	$(NAME)

$(NAME):	$(OBJS) $(LIBID)
	$(CC) -o $(NAME) $(OBJS) $(LIBS)

$(LIBID):
	make -C libid/

clean:
	rm -f $(OBJS)
	make -C libid/ clean

distclean:	clean
	rm -f $(NAME)
	make -C libid/ distclean

rebuild:	distclean all $(NAME)

debug:		CFLAGS += -DDEBUG -g3
debug:		rebuild
	./$(NAME) 127.0.0.1 6667
