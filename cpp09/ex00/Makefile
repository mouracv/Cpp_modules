

NAME = btc
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

data:
	@wget -q https://cdn.intra.42.fr/document/document/27358/cpp_09.tgz
	@tar -xzf cpp_09.tgz
	@mv cpp_09/data.csv .
	@rm -rf cpp_09.tgz cpp_09
	@echo Downloaded data.csv from intra

input:
	@printf "date | value\n\
	2011-01-03 | 3\n\
	2011-01-03 | 2\n\
	2011-01-03 | 1\n\
	2011-01-03 | 1.2\n\
	2011-01-09 | 1\n\
	2012-01-11 | -1\n\
	2001-42-42\n\
	2012-01-11 | 1\n\
	2012-01-11 | 2147483648" > input.txt
	@echo Created input.txt file

file:
	@wget -O input.csv -q https://cdn.intra.42.fr/document/document/20226/input.csv
	@echo Downloaded input.csv from intra

eval: data input file
	./$(NAME) input.txt
	@echo
	./$(NAME) input.csv

.PHONY: all clean fclean re
