NAME = Animals
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
LIBS = Animals.hpp

SRCS = main.cpp
OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))

all : $(NAME)

$(OBJS_DIR)/%.o : %.cpp
	@mkdir -p obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) : $(LIBS) $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	@rm -rf $(OBJS) $(OBJS_DIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean all