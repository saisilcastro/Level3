NAME = fixed
CPP = c++
INCLUDE = -I$(CURDIR)
SRC =	Fixed.cpp main.cpp
OBJ = obj
SRCOBJ = $(SRC:%.cpp=${OBJ}/%.o)
CREATE = mkdir -p $(1)
REMOVE = rm -rf $(1)
FLAG = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(SRCOBJ)
	@$(CPP) $^ $(FLAG) -o $(NAME)
${OBJ}/%.o : %.cpp
	@$(call CREATE,${OBJ})
	@$(CPP) -std=c++98 -c $< -o $@ $(INCLUDE)
clean:
	@$(call REMOVE,${OBJ})
fclean: clean
	@$(call REMOVE,${NAME})
re: fclean all
leak:
	valgrind --leak-check=full ./$(NAME)
