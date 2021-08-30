NAME = libqueue.a

SRCS = newNode.c insertFront.c nodeLast.c insertEnd.c
OBJS = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	clang -c $(SRCS) -I ./

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean re

.PHONY: all clean fclean re
