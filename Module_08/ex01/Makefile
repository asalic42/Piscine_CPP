NAME 	 = span
CXX	 	 = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
LIBS	 = Span.hpp

SRCS	 = main.cpp Span.cpp
OBJS_DIR  = obj
OBJS	 = $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))

RED = "\033[1;31m"
GREEN = "\033[1;32m"
YELLOW = "\033[1;33m"
BLUE = "\033[1;34m"
CYAN = "\033[1;36m"
NC = "\033[0m"

all : $(LIBS) $(NAME)

$(OBJS_DIR)/%.o : %.cpp $(LIBS)
	@mkdir -p obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo $(CYAN) "...wait\n" $(NC)

$(NAME) : $(LIBS) $(OBJS) Makefile
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo $(BLUE) "--> Compilation Done\n" $(NC)

clean :
	@rm -rf $(OBJS) $(OBJS_DIR)
	@echo $(GREEN) "--> Clean Done\n" $(NC)

fclean	: clean
	@rm -rf $(NAME)
	@echo $(GREEN) "--> FClean Done\n" $(NC)

re : fclean all 