NAME = forms
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
LIBS = Bureaucrat.hpp AForm.hpp \
		PresidentialPardonForm.hpp \
		RobotomyRequestForm.hpp \
		ShrubberyCreationForm.hpp

SRCS = main.cpp Bureaucrat.cpp AForm.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp
OBJS_DIR = obj
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))

all : $(NAME)

$(OBJS_DIR)/%.o : %.cpp $(LIBS)
	@mkdir -p obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "...wait\n"

$(NAME) : $(LIBS) $(OBJS) Makefile
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "--> Compilation C++ : Done\n"

clean :
	@rm -rf $(OBJS) $(OBJS_DIR)
	@echo "--> Clean : Done\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "--> FClean : Done\n"

re : fclean all