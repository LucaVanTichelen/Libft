# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/13 10:34:40 by lvan-tic          #+#    #+#              #
#    Updated: 2021/04/28 14:53:36 by lvan-tic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c 			\
			ft_bzero.c 			\
			ft_calloc.c 		\
			ft_isalnum.c 		\
			ft_isalpha.c 		\
			ft_isascii.c 		\
			ft_isdigit.c 		\
			ft_isprint.c 		\
			ft_itoa.c 			\
			ft_memccpy.c 		\
			ft_memchr.c 		\
			ft_memcmp.c 		\
			ft_memcpy.c 		\
			ft_memmove.c 		\
			ft_memset.c 		\
			ft_putchar_fd.c 	\
			ft_putendl_fd.c 	\
			ft_putnbr_fd.c 		\
			ft_putstr_fd.c 		\
			ft_split.c 			\
			ft_strchr.c 		\
			ft_strdup.c 		\
			ft_strjoin.c 		\
			ft_strlcat.c 		\
			ft_strlcpy.c 		\
			ft_strlen.c 		\
			ft_strmapi.c 		\
			ft_strncmp.c 		\
			ft_strnstr.c 		\
			ft_strrchr.c 		\
			ft_strtrim.c 		\
			ft_substr.c 		\
			ft_tolower.c 		\
			ft_toupper.c

BONUS	=	ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c

OBJS	=	$(SRCS:.c=.o)

OBJSB	=	$(BONUS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

LIB		=	libft.h

RM		=	rm -f

all		:	
			@make $(NAME)

$(NAME)	:	$(OBJS)
			@ar -rc $(NAME) $(OBJS)

clean	:	
			@$(RM) $(OBJS) $(OBJSB)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all

bonus	:	$(OBJSB)
		 	@ar -rc $(NAME) $(OBJSB)
