# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalic <asalic@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 14:16:20 by asalic            #+#    #+#              #
#    Updated: 2023/11/09 15:18:26 by asalic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
LIBS = Weapon.hpp HumanA.hpp HumanB.hpp

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:%.cpp=%.o))

all : $(NAME)

$(OBJDIR)/%.o : %.cpp
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(LIBS) $(OBJS) 
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "---Compilation en C++ : Done---\n"

clean :
	@rm -rf $(OBJS) $(OBJDIR) 
	@echo ">> Clean Done <<\n"

fclean : clean
	@rm -rf $(NAME)
	@echo ">> Fclean Done <<\n"

re : fclean all
	@make -s all