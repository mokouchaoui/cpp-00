# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 15:35:51 by mokoucha          #+#    #+#              #
#    Updated: 2022/10/17 02:48:39 by mokoucha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

SRC			= megaphone.cpp

OBJ			=	$(SRC:.cpp=.o)

COMPILE			= 	clang++

FLAGS			= 	-Wall -Wextra -Werror -std=c++98

RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[38;5;8m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[38;5;160m

all: $(NAME)
	@printf "$(GREEN)"
	@printf "░█████╗░██████╗░██████╗░  ░█████╗░░█████╗░\n"
	@printf	"██╔══██╗██╔══██╗██╔══██╗  ██╔══██╗██╔══██╗\n"
	@printf	"██║░░╚═╝██████╔╝██████╔╝  ██║░░██║██║░░██║\n"
	@printf	"██║░░██╗██╔═══╝░██╔═══╝░  ██║░░██║██║░░██║\n"
	@printf	"╚█████╔╝██║░░░░░██║░░░░░  ╚█████╔╝╚█████╔╝\n"
	@printf	"░╚════╝░╚═╝░░░░░╚═╝░░░░░  ░╚════╝░░╚════╝░\n"
	@printf "$(RESET)"
	@echo "	$(RESET) The $(NAME) Compiled  ✅				"
%.o: %.cpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(GREEN) The $(NAME) Compiled  ✅				"
	@$(COMPILE) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@echo "$(RED) The $(OBJ) Removed  ❌				"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "$(RED) The $(OBJ) + the $(NAME) Removed ❌ ❌				"
#	@echo "$(RED)  Removing...				"

re: fclean all
	@echo "$(GREEN) The $(NAME) Remaked ✅	"
.PHONY: all clean fclean re
