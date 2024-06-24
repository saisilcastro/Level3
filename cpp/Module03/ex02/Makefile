NAME = run
SRC = main.cpp ClapTrap.cpp ScravTrap.cpp FlagTrap.cpp
OBJ = obj
SRCOBJ = $(SRC:%.cpp=${OBJ}/%.o)
CPP = c++
FLAG = -Wall -Wextra -Werror
CREATE = mkdir -p $(1)
REMOVE = rm -rf $(1)

all: $(NAME)
$(NAME): $(SRCOBJ)
	@printf "compiling done"
	@$(CPP) $^ $(FLAG) -o $(NAME)
${OBJ}/%.o : %.cpp
	@printf "building "$@"\n"
	@$(call CREATE,${OBJ})
	@$(CPP) -std=c++98 -c $< -o $@
clean:
	@$(call REMOVE,${OBJ})
fclean: clean
	@$(call REMOVE,${NAME})
re: fclean all
.PHONY: all clean fclean re