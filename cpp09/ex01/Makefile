
END			:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
MAGENTA		:= \033[1;35m
CYAN		:= \033[1;36m
WHITE		:= \033[1;37m

NAME = RPN
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCDIR = src
OBJDIR = obj

SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@clear
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

eval:	$(NAME)
	@echo "\n$(YELLOW)Teste 1$(END)"
	./$(NAME) "5 1 2 + 4 * + 3 -"
	@echo "\n$(YELLOW)Teste 2$(END)"
	./$(NAME) "3 4 2 * 1 5 - 2 3 + / +"
	@echo "\n$(YELLOW)Teste 3$(END)"
	./$(NAME) "10 6 9 3 + -11 * / * 17 + 5 "
	@echo "\n$(YELLOW)Teste 4$(END)"
	./$(NAME) "2 3 + 4 5 * + 6 2 / -"
	@echo "\n$(YELLOW)Teste 5$(END)"
	./$(NAME) "7 2 3 * - 4 5 2 / +"
	@echo "\n$(YELLOW)Teste 6$(END)"
	./$(NAME) "5 1 2 + 4 * + 3 - 2 3 * 6 / +"
	@echo "\n$(YELLOW)Teste 7$(END)"
	./$(NAME) "4 2 + 3 5 1 - * + 2 /"
	@echo "\n$(YELLOW)Teste 8$(END)"
	./$(NAME) "8 0 / 5 2 * + 4 -"
	@echo "\n$(YELLOW)Teste 9$(END)"
	./$(NAME) "6 2 3 + - 3 8 2 / + *"
	@echo "\n$(YELLOW)Teste 10$(END)"
	./$(NAME) "3 4 + 2 5 * - 7 2 / +"
	@echo

.PHONY: all clean fclean re
