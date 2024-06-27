NAME = bureaucrat
SRC = main.cpp Bureaucrat.cpp Form.cpp
OBJ = obj
SRCOBJ = $(SRC:%.cpp=${OBJ}/%.o)
CREATE = mkdir -p $(1)
REMOVE = rm -rf $(1)
FLAG = -Wall -Werror -Wextra
CPP = c++

all: $(NAME)
$(NAME): $(SRCOBJ)
	@printf "compiling done"
	@$(CPP) $^ $(FLAG) -o $(NAME)
${OBJ}/%.o : %.cpp
	@printf "building "$@"\n"
	@$(call CREATE,${OBJ})
	@$(CPP) -std=c++98 -c $< -o $@
clean:
	$(call REMOVE,${OBJ})
fclean: clean
	$(call REMOVE,${NAME})
re: fclean all