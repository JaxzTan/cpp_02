# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/09 12:35:05 by chtan             #+#    #+#              #
#    Updated: 2025/02/18 13:21:56 by chtan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	./First_orth_class
CXX				=	@c++
CXXFLAGS		=	-Wall -Wextra -Werror -pedantic -std=c++98 -g3
SRC				=	./src/*.cpp
CPPFLAGS		=	-I./inc/
OBJ_DIR			=	./obj
# ------------------------------------------------------------------#
# makefile-rules  								  			#
# ------------------------------------------------------------------#
all				:	$(NAME)
					@echo "\033[0;32mProgram is ready!\033[0m"

$(NAME)			:	$(SRC)
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(SRC)
	@mkdir -p $(OBJ_DIR) && mv ./*.o $(OBJ_DIR)
	@$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $(NAME) $(OBJ_DIR)/*.o

clean			:
	@rm -rf $(OBJ_DIR) && rm -rf ./*.o
	@echo "\033[0;31mProgram deleted successfully!\033[0m"
	@sleep 0.5
	@clear

fclean			:	clean
	@rm -rf $(NAME)


re				:	fclean all

run				: 
	@reset && $(MAKE) -s re && $(NAME) && $(MAKE) -s fclean
