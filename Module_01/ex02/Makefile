# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalic <asalic@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 13:48:12 by asalic            #+#    #+#              #
#    Updated: 2023/11/09 13:48:28 by asalic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:%.cpp=%.o))

all : $(NAME)

$(OBJDIR)/%.o : %.cpp
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) 
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