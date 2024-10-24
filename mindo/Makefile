# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doqahtan <doqahtan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 10:14:44 by doqahtan          #+#    #+#              #
#    Updated: 2024/05/22 10:14:47 by doqahtan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
CFLAGS = -Wall -Werror -Wextra
CC = cc
LIBFT = ./my_library


all:
	@make -s -C $(LIBFT)
	@cc $(CFLAGS) server.c -o $(SERVER) -L$(LIBFT) -lft
	@cc $(CFLAGS) client.c -o $(CLIENT) -L$(LIBFT) -lft
	@echo "Server And Client Are Ready!"

clean:
	@make clean -s -C $(LIBFT)


fclean: clean
	@make fclean -s -C $(LIBFT)
	@rm -f $(SERVER) $(CLIENT)
	@echo "Server and Client Have Been Cleaned Successfully"

re: fclean all