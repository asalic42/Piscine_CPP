# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalic <asalic@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 12:13:09 by asalic            #+#    #+#              #
#    Updated: 2023/12/01 11:13:36 by asalic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= DiamondTrap
CXX	 			= c++
CXXFLAGS 		= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
LIBS	 		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

SRCS	 		= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
OBJDIR	 		= obj
OBJ		 		= $(addprefix $(OBJDIR)/, $(SRCS:%.cpp=%.o))

all				: $(NAME)

$(OBJDIR)/%.o 	: %.cpp
	@mkdir -p obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "...wait\n"

$(NAME)			: $(LIBS) $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "--- Compilation in C++ : Done ---\n"

clean			:
	@rm -rf $(OBJ) $(OBJDIR)
	@echo "--- Clean Done ---\n"
	
fclean			: clean
	@rm -rf $(NAME)
	@echo "--- FClean Done ---\n"

re : fclean all