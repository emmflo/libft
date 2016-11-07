OBJDIR := objs
OBJLIST := \
	ft_strncpy.o \
	ft_strlen.o \
	ft_strdup.o \
	ft_strcpy.o \
	ft_memset.o \
	ft_bzero.o \
	ft_strcmp.o \
	ft_strncmp.o \
	ft_memcpy.o \
	ft_memccpy.o \
	ft_memcmp.o \
	ft_isalpha.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_isdigit.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_atoi.o \
	ft_memmove.o \
	ft_memchr.o \
	ft_strcat.o \
	ft_strncat.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_strstr.o \
	ft_strnstr.o \
	ft_strlcat.o \
	ft_memalloc.o \
	ft_memdel.o \
	ft_strnew.o \
	ft_strdel.o \
	ft_strclr.o \
	ft_striter.o \
	ft_striteri.o \
	ft_strmap.o \
	ft_strmapi.o \
	ft_strequ.o \
	ft_strnequ.o
TESTSDIR := tests
OBJLISTTESTS := main.o ft_unit.o $(OBJLIST:.o=_tests.o)
OBJSTESTS := $(addprefix $(TESTSDIR)/,$(OBJLISTTESTS))
OBJS := $(addprefix $(OBJDIR)/,$(OBJLIST))
CC := clang
INCDIR := 
CFLAGS := -Wall -Wextra -Werror $(INCDIR)
NAME := libft.a

.PHONY : all clean fclean re tests

all : $(NAME)
	
$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TESTSDIR)/%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): | $(OBJDIR)

$(OBJSTESTS): | $(TESTSDIR)/$(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

$(TESTSDIR)/$(OBJDIR):
	mkdir $(TESTSDIR)/$(OBJDIR)

clean :
	-rm -r $(OBJDIR)

fclean :
	-rm $(NAME)
	-rm -r $(OBJDIR)
	-rm unit_tests
	-rm -r tests/$(OBJDIR)
	-rm tests/*.o

re : fclean all

tests: all $(OBJSTESTS)
	$(CC) -lbsd $(OBJSTESTS) libft.a -o unit_tests
	./unit_tests
