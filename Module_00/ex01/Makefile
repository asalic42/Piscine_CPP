# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalic <asalic@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 15:35:01 by asalic            #+#    #+#              #
#    Updated: 2023/11/08 17:55:54 by asalic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = PhoneBook.cpp main.cpp Contact.cpp
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:%.cpp=%.o))

all : $(NAME)

$(OBJDIR)/%.o : %.cpp
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : PhoneBook.hpp Contact.hpp $(OBJS) 
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