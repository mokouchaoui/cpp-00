# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 06:29:42 by mokoucha          #+#    #+#              #
#    Updated: 2022/10/17 03:11:08 by mokoucha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	tests.cpp \
		Account.cpp \

OBJ = ${SRC:.cpp=.o}
DOBJ = ${SRC:.cpp=.d}

GREEN		= \033[32;1m
RED			= \033[31;1m
YELLOW		= \033[33;1m
CYAN		= \033[36;1m
RESET		= \033[0m

.cpp.o:
	@${CC} ${FLAGS} -MMD -MP -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJ}
	@${CC} ${OBJ} -o ${NAME}
	@${CC} ${OBJ} -o ${NAME}
	@printf "$(GREEN)"
	@printf "░█████╗░██████╗░██████╗░  ░█████╗░░█████╗░\n"
	@printf	"██╔══██╗██╔══██╗██╔══██╗  ██╔══██╗██╔══██╗\n"
	@printf	"██║░░╚═╝██████╔╝██████╔╝  ██║░░██║██║░░██║\n"
	@printf	"██║░░██╗██╔═══╝░██╔═══╝░  ██║░░██║██║░░██║\n"
	@printf	"╚█████╔╝██║░░░░░██║░░░░░  ╚█████╔╝╚█████╔╝\n"
	@printf	"░╚════╝░╚═╝░░░░░╚═╝░░░░░  ░╚════╝░░╚════╝░\n"
	@printf "$(RESET)"
	@echo "	$(RESET) The $(NAME) Compiled  ✅				"
all: ${NAME}
	
clean:
	@rm -f ${OBJ} ${DOBJ}
	@echo "$(RED) The $(OBJ) Removed  ❌				"

fclean: clean
	@rm -f ${NAME}
	@echo "$(RED) The $(OBJ) + the $(NAME) Removed ❌ ❌				"

re: fclean all
	@echo "$(GREEN) The $(NAME) Remaked ✅	"
.PHONY: all clean fclean re
