NAME 		= Materia
CXX			= c++
CXXFLAGS 	= -Wall -Wextra -Werror -g3
LIBS		= AMateria.cpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp

SRCS 		= main.cpp AMateria.cpp Ice.cpp Character.cpp Cure.cpp MateriaSource.cpp
OBJ_DIR		= obj
OBJS		= $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

NC 			= \033[0m
CYAN   		= \033[36;1m
GREEN   	= \033[32;1m
RED     	= \033[31;1m

all	: $(NAME)

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(CYAN)wait...$(NC)\n"

$(NAME) : $(OBJS) $(LIBS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)\t---- Compilation Done ----\n$(NC)"

clean :
	@rm -rf $(OBJS) $(OBJ_DIR)
	@echo "$(RED)\t-- Clean Done --$(NC)\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(RED)\t-- FClean Done --$(NC)\n"

re : fclean
	@make -s all