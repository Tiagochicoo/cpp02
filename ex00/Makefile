# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 12:33:26 by tpereira          #+#    #+#              #
#    Updated: 2023/04/10 09:54:57 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG		= fixed
CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
SRCS		= ./srcs/*.cpp
INC			= ./includes/*.hpp

all :
	@$(CC) $(CFLAGS) $(SRCS) -o $(PROG)
	@printf "\e[38;5;46m ╔════════════════════════════════════╗\e[0m\n"
	@printf "\e[38;5;46m█▓▒░		Compiled Fixed	    ░▒▓█ \e[0m\n"
	@printf "\e[38;5;46m ╚════════════════════════════════════╝\e[0m\n"

clean :
	@rm -rf $(PROG) *.dSYM *.out
	@printf "\e[31;5;200m ╔════════════════════════════════════╗\e[0m\n"
	@printf "\e[31;5;200m░▒▓█         Clean complete        █▓▒░\e[0m\n"
	@printf "\e[31;5;200m ╚════════════════════════════════════╝\e[0m\n"

fclean : clean
	@rm -rf $(PROG)

re : fclean all
