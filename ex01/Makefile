# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 08:56:45 by tvalimak          #+#    #+#              #
#    Updated: 2024/10/04 09:47:14 by tvalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for Polymorphism Exercise (ex00)

# Compiler and flags
C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Executable name
NAME = animals

# Source files
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp

# Object files (same names as SRCS, but with .o extension)
OBJS = $(SRCS:.cpp=.o)

# Default target to build the executable
all: $(NAME)

# Rule to build the executable
$(NAME): $(OBJS)
	$(C) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(C) $(CFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Rebuild the entire project
re: fclean all

# Phony targets (not associated with actual files)
.PHONY: all clean fclean re