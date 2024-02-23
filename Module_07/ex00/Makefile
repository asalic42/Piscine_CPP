NAME 	 = whatever
CXX	 	 = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
LIBS	 = whatever.hpp

SRCS	 = main.cpp
OBJS_DIR  = obj
OBJS	 = $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
NC = \033[0m

all : $(LIBS) $(NAME)

$(OBJS_DIR) / %.o : %.cpp
	@mkdir -p obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "...wait\n"

$(NAME) : $(LIBS) Makefile
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo $(BLUE) "--> Compilation Done\n" $(NC)

clean :
	@rm -rf $(OBJS) $(OBJS_DIR)
	@echo $(GREEN) "--> Clean Done\n" $(NC)

fclean	: clean
	@rm -rf $(NAME)
	@echo $(GREEN) "--> FClean Done\n" $(NC)

re : fclean all 