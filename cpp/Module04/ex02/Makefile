NAME = animal
SRC = main.cpp AAnimal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
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
leak:
	valgrind --leak-check=full ./$(NAME)