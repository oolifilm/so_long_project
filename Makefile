NAME		=	so_long.a
CCF			=	gcc -Wall -Wextra -Werror

LIBFT_PATH	=	libft/
LIBFT_FILE	=	libft.a
LIBFT_LIB	=	$(LIBFT_PATH)$(LIBFT_FILE)

MLX_PATH	=	mlx/
MLX_FILE	=	libmlx.a
MLX_LIB		=	$(MLX_PATH)$(MLX_FILE)

C_FILE		=	init.c \

INC			=	-I ./includes/ \
				-I ./mlx/

SRC_PATH	=	./sources/
SRC			=	$(addprefix $(SRC_PATH),$(C_FILE))

OBJ			=	$(SRC:.c=.o)

all: $(LIBFT_LIB) $(MLX_LIB) $(NAME)

$(LIBFT_LIB):
	@echo "COMPILING $(LIBFT_PATH)"  
	@make -sC $(LIBFT_PATH)           
	@echo "LIBFT_lib created"        

$(MLX_LIB):
	@echo "COMPILING $(MLX_PATH)..." 
	@make -sC $(MLX_PATH)            
	@echo "MLX_lib created"          

$(NAME): $(OBJ)
	@echo "COMPILING SO_LONG..."     
	$(CCF) -o $(NAME) $(OBJ) $(LIBFT_LIB) $(MLX_LIB) $(INC) -lX11 -lXext
	@echo "./so_long created"        

clean:
	@echo "Deleting Obj file in $(MLX_PATH)..."   
	@make clean -sC $(MLX_PATH)
	@echo "Done"                                                     
	@echo "Deleting Obj file in $(LIBFT_PATH)..." 
	@make clean -sC $(LIBFT_PATH)                 
	@echo "Done"                                  
	@echo "Deleting So_long object..."            
	@rm -f $(OBJ)                                 
	@echo "Done"                                  

fclean: clean
	@echo "Deleting so_long executable..."        
	@rm -rf $(NAME)
	@rm -rf $(LIBFT_PATH)$(LIBFT_FILE)                                           
	@echo "Done"                                 

re: fclean all

.PHONY: all clean fclean re
