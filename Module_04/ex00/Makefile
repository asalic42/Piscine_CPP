NAME = Animal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
LIBS = Animal.hpp Dog.hpp Cat.hpp

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))

RED 	= \033[31;1m
BLUE 	= \033[34;1m
YELLOW 	= \033[33;1m
GREEN 	= \033[32;1m
PURP 	= \033[35;1m
CYAN 	= \033[36;1m
NC 		= \033[0m

all : $(NAME)

$(OBJS_DIR)/%.o : %.cpp $(LIBS)
	@mkdir -p obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(YELLOW)...wait$(NC)\n"

$(NAME) : $(LIBS) $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(CYAN)--> Compilation C++ : Done$(NC)\n"

clean :
	@rm -rf $(OBJS) $(OBJS_DIR)
	@echo "$(RED)--> Clean : Done$(NC)\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(RED)--> FClean : Done$(NC)\n"

re : fclean all