# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 19:14:43 by ilahyani          #+#    #+#              #
#    Updated: 2021/11/20 12:19:42 by ilahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS        =   ft_isalpha.c\
                ft_isdigit.c\
                ft_isalnum.c\
                ft_isascii.c\
                ft_isprint.c\
                ft_strlen.c\
                ft_memset.c\
                ft_bzero.c\
                ft_memcpy.c\
                ft_memmove.c\
                ft_strlcpy.c\
                ft_strlcat.c\
                ft_toupper.c\
                ft_tolower.c\
                ft_strchr.c\
                ft_strrchr.c\
                ft_strncmp.c\
                ft_memchr.c\
                ft_memcmp.c\
                ft_strnstr.c\
                ft_atoi.c\
                ft_calloc.c\
                ft_strdup.c\
                ft_substr.c\
                ft_strjoin.c\
                ft_strtrim.c\
                ft_split.c\
                ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
                ft_lstdelone.c

BNS_SRC		=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c

BNS_OBJS 	=	$(BNS_SRC:.c=.o)

OBJS		= 	$(SRCS:.c=.o)

NAME		= 	libft.a

CC 			=	gcc

CFLAGS		= 	-Wall -Wextra -Werror

BONUS		= 	bonus

RM			= 	rm -f

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib ${NAME}

all:		${NAME}

$(BONUS):	$(OBJS) $(BNS_OBJS) 
			ar rcs $(NAME) $(OBJS) $(BNS_OBJS)
			ranlib ${NAME}

clean:
			$(RM) $(OBJS) $(BNS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean re fclean
