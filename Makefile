# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szhong <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:46:51 by szhong            #+#    #+#              #
#    Updated: 2023/11/20 20:12:17 by szhong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define colour
DEFAULT = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
MAGENTA = \033[0;95m
YELLOW = \033[0;93m
CYAN =\033[0;96m
WHITE = \033[0;97m
BOLD = \033[91m

NAME		:= libft.a
CC		:= cc
CFLAGS		:= -Wall -Wextra -Werror

AR		:= ar -rc

RM		:= rm -rf

INCLUDE			=	./inc
SRC_DIR			=	src
SRC	:= \
		  ft_string/ft_bzero \
		  ft_string/ft_memchr \
		  ft_string/ft_memcmp \
		  ft_string/ft_memcpy \
		  ft_string/ft_memmove \
		  ft_string/ft_memset \
		  ft_string/ft_split \
		  ft_string/ft_strchr \
		  ft_string/ft_strcmp \
		  ft_string/ft_strdup \
		  ft_string/ft_striteri \
		  ft_string/ft_strjoin \
		  ft_string/ft_strlcat \
		  ft_string/ft_strlcpy \
		  ft_string/ft_strlen \
		  ft_string/ft_strmapi \
		  ft_string/ft_strncmp \
		  ft_string/ft_strnstr \
		  ft_string/ft_strrchr \
		  ft_string/ft_strstr \
		  ft_string/ft_strtrim \
		  ft_string/ft_substr \
		  ft_string/ft_tolower \
		  ft_string/ft_toupper \
		  IO/ft_putchar \
		  IO/ft_putchar_fd \
		  IO/ft_putendl_fd \
		  IO/ft_putnbr_base \
		  IO/ft_putnbr_fd \
		  IO/ft_putstr_fd \
		  ft_ctype/ft_isalnum \
		  ft_ctype/ft_isalpha \
		  ft_ctype/ft_isascii \
		  ft_ctype/ft_isblank \
		  ft_ctype/ft_iscntrl \
		  ft_ctype/ft_isdigit \
		  ft_ctype/ft_islower \
		  ft_ctype/ft_isprint \
		  ft_ctype/ft_ispunct \
		  ft_ctype/ft_isspace \
		  ft_ctype/ft_isupper \
		  ft_ctype/ft_isxdigit \
		  ft_stdlib/ft_atoi \
		  ft_stdlib/ft_calloc \
		  ft_stdlib/ft_itoa \
		  gnl/get_next_line_bonus \
		  gnl/get_next_line_utils_bonus \
		  nbr/ft_is_prime \
		  nbr/ft_pow \
		  nbr/ft_range \
		  nbr/ft_sqrt \
		  nbr/ft_swap \
		  list/ft_lstadd_back \
		  list/ft_lstadd_front \
		  list/ft_lstclear \
		  list/ft_lstdelone \
		  list/ft_lstiter \
		  list/ft_lstlast \
		  list/ft_lstmap \
		  list/ft_lstnew \
		  list/ft_lstsize


SRCS 			=	$(addsuffix .c, $(SRC))

OBJ_DIR			=	obj
OBJS = $(patsubst %c,%o,$(SRCS))

$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.c 
			@mkdir -p $(dir $@) 
			$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

all:$(NAME)

$(NAME):	$(addprefix $(OBJ_DIR)/, $(OBJS))
		@$(AR) $(ARFLAGS) $(NAME) $(addprefix $(OBJ_DIR)/, $(OBJS))
		@echo "$(YELLOW)[LIBFT] $(GREEN)Build Completed!$(DEFAULT)"


clean:
		@$(RM) $(OBJ_DIR)
		@echo "$(YELLOW)[LIBFT] $(GREEN)Objects Removed$(DEFAULT)"

fclean:		clean
		$(RM) $(NAME)
		@echo "$(YELLOW)[LIBFT] $(GREEN)$(NAME) Removed$(DEFAULT)"

re:		fclean all

.PHONY:		all clean fclean re
