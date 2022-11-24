# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 21:36:53 by msariasl          #+#    #+#              #
#    Updated: 2022/11/21 21:37:46 by msariasl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

SRC = $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
FILES = $(shell find . -name "*.c" ! -name "main.c")
OBJ = $(SRC:.c=.o)
BSRC = $(wildcard ft_lst*.c)
B_OBJ = $(BSRC:.c=.o)
NORM = norminette $(FILES) && norminette libft.h
FLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rc
FONAME = IAMReadyToPushGetNextLine
TARGET = ~/Desktop/
DEST = $(TARGET)$(FONAME)
CC = gcc
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

all: $(NAME)

bonus: $(OBJ) $(B_OBJ)
	ar -rc $(NAME) $(OBJ) $(B_OBJ)

clean:
	$(RM) *.o && $(RM) *.out

fclean:
	make clean
	$(RM) $(NAME)

re:
	$(RM) $(NAME)
	$(MAKE)

release:
	$(RM) $(NAME)
	$(MAKE)
	$(RM) *.o
	$(NORM)

debug:
	clear
	gcc *.c
	./a.out

sdebug:
	gcc $(FLAGS) *.c
	./a.out

n:
	$(NORM)

push:
	git status
	git add ../.
	git commit -m "makefile commit"
	git push -f

ready:
	rm -rf $(DEST)
	mkdir $(DEST)
	cp *.c $(DEST)
	cp *.h $(DEST)
	rm -rf $(DEST)/main.c

lldb:
	gcc -g *.c

test:
	clear
	make fclean
	rm -rf tester
	mkdir tester
	cp -r ../gnlTester/* tester/
	cd tester/ && $(MAKE) a

# test2:
# 	clear
# 	make fclean
# 	cd ../libftTester && $(MAKE) a

.PHONY: all clean fclean re bonus