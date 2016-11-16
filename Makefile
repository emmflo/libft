OBJDIR := objs
OBJLIST := \
	ft_strncpy.o \
	ft_strlen.o \
	ft_strdup.o \
	ft_strndup.o \
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
	ft_strnequ.o \
	ft_strsub.o \
	ft_strjoin.o \
	ft_strtrim.o \
	ft_strsplit.o \
	ft_itoa.o \
	ft_putchar.o \
	ft_putchar_fd.o \
	ft_putstr.o \
	ft_putstr_fd.o \
	ft_putendl.o \
	ft_putendl_fd.o \
	ft_putnbr.o \
	ft_putnbr_fd.o \
	ft_lstnew.o \
	ft_lstdelone.o \
	ft_lstdel.o \
	ft_lstadd.o \
	ft_lstiter.o \
	ft_lstmap.o \
	ft_lstfold.o \
	ft_lstfilter.o \
	ft_lstinplacefilter.o \
	ft_newarray.o \
	ft_getelemarray.o \
	ft_tabiter.o \
	ft_tabiter_null.o \
	ft_printstrtab.o \
	ft_printstrtab_null.o
OBJS := $(addprefix $(OBJDIR)/,$(OBJLIST))
CC := clang
INCDIR := 
CFLAGS := -Wall -Wextra -Werror $(INCDIR)
NAME := libft.a

.PHONY : all clean fclean re

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

re : fclean all
