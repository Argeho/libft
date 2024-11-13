NAME  = libft.a
SRCS  = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strtrim.c\
		ft_strjoin.c ft_strdup.c ft_memchr.c ft_memmove.c ft_itoa.c ft_calloc.c ft_bzero.c\
		ft_putchar_fd.c ft_striteri.c ft_putstr_fd.c ft_split.c ft_putnbr_fd.c\
		ft_strmapi.c ft_putendl_fd.c ft_strcmp.c
BONUSSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
			ft_lstmap_bonus.c	
BONJFILES = $(BONUSSRCS:%.c=%.o)
OBJFILES = $(SRCS:%.c=%.o)
HEADER = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror

ifdef ADD_BONUS
ALLFILES = $(OBJFILES) $(BONJFILES)
else
ALLFILES = $(OBJFILES)
endif

all: $(NAME)

$(NAME): $(ALLFILES)
	ar -rcs $(NAME) $(ALLFILES)
bonus: $(ALLFILES)
	@$(MAKE) ADD_BONUS=1
# $(NAME): $(OBJFILES) 
# 	ar -rcs $(NAME) $(OBJFILES)

# bonus: $(BONJFILES) $(OBJFILES)
# 	ar -rcs $(NAME) $(BONJFILES) $(OBJFILES)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES) $(BONJFILES)

fclean: clean
	rm -f $(NAME)


re: fclean all

# bonus: $(BONUS)

# $(BONUS): $(BONJFILES)
# 	ar -rcs $(BONUS) $(BONJFILES)

# .c.o:
# 	&(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

# cleanbonus:
# 	rm -f $(BONJFILES)

# fcleanbonus: cleanbonus
# 	rm -f $(BONUS)
# rebonus: fclean bonus

