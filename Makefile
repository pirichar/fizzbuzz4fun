# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 11:30:02 by pirichar          #+#    #+#              #
#    Updated: 2023/09/23 13:14:07 by pirichar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project name
NAME = fizz_buzz

# Source directories
SRC			= src
INC			= include
OBJ			= obj
TEST_SRC 	= test




# Points to the root of Google Test, relative to where this file is.
# Remember to tweak this if you move this file.
GTEST_DIR=../googletest/googletest

# Flags passed to the preprocessor.
# Set Google Test's header directory as a system directory, such that
# the compiler doesn't generate warnings in Google Test headers.
CPPFLAGS += -isystem $(GTEST_DIR)/include


# All Google Test headers.  Usually you shouldn't change this
# definition.
GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h



# Test source files
TEST_CFILES = my_test.cpp
TEST_OFILES = $(TEST_CFILES:.cpp=.o)
TEST_SRCS = $(addprefix $(TEST_SRC)/, $(TEST_CFILES))
TEST_OBJS = $(addprefix $(OBJ)/, $(TEST_OFILES))

# Source files
CFILES		= fizz_buzz.c utils.c main.c
HFILES		= colors.h fizz_buzz.h
OFILES		= $(CFILES:.c=.o)
SRCS		= $(addprefix $(SRC)/, $(CFILES))
HEADERS		= $(addprefix $(INC)/, $(HFILES))

# Object files
OBJS		= $(addprefix $(OBJ)/, $(OFILES))
VPATH		= $(SRC)

# Compiler and flags
CC			= gcc
CXX 		= g++
CFLAGS		= -Wall -Werror -Wextra -g -pthread 
CXXFLAGS = -Wall -Werror -Wextra -g -pthread

# Clean command
RM			= rm -rf

# Include and library paths for Google Test
GTEST_INC = -I../googletest/googletest/include
GTEST_LIB = -L../googletest/build/lib -lgtest -lgtest_main


# Targets
$(OBJ)/%.o:	%.c 
			@$(CC) $(CFLAGS) -c $< -o  $@

# Rule to compile test source files
$(OBJ)/%.o:	$(TEST_SRC)/%.cpp
	@$(CXX) $(CXXFLAGS) $(GTEST_INC) -c $< -o $@
			
$(NAME):	$(OBJ) $(OBJS) 
			@$(CC) $(OBJS) -o $(NAME)
			@echo "COMPILING DONE"

$(OBJ):	
			@mkdir -p $(OBJ)



# Compile test code and link with Google Test
test: $(OBJ) $(TEST_OBJS) $(OBJS) $(OBJ)/my_test.o
	@$(CXX) $(CXXFLAGS) $(GTEST_INC) $(TEST_OBJS) $(OBJS) $(GTEST_LIB) -o $(TEST_SRC)/my_test
	@echo "COMPILING TESTS DONE"
	@./$(TEST_SRC)/my_test



all:		$(NAME)

bonus :		$(OBJ) $(OBJBNS)
			@$(CC) $(OBJBNS) -o $(NAME)
			@echo "COMPILING BONUS DONE"

clean:
			@$(RM) $(OBJS) $(OBJBNS) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

norme:
			@norminette $(SRCS) $(HEADERS) $(GETNEXT) $(BONUSNORM)