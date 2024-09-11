# Nom de l'archive de la librairie
NAME = libft.a

# Compilateur et options de compilation
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Utilitaires pour créer l'archive
AR = ar
ARFLAGS = rcs

# Répertoire contenant les fichiers source
SRCS = ./src/

# Liste des fichiers source de la libft (sans les bonus)
SOURCES = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			get_next_line.c \
			get_next_line_utils.c \
			ft_ifchr.c ft_ifhex.c ft_ifstr.c ft_ifptr.c ft_ifint.c ft_ifudi.c \
			ft_printf.c


# Liste des fichiers source pour les bonus
BONUS_SOURCES = ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

# Conversion des fichiers .c en fichiers objets .o
OBJECTS = ${addprefix ${SRCS}, ${SOURCES:.c=.o}}
BONUS_OBJECTS = ${addprefix ${SRCS}, ${BONUS_SOURCES:.c=.o}}

# Règle principale: créer la librairie (libft.a)
all : ${NAME}

# Crée l'archive à partir des objets
${NAME} : ${OBJECTS}
		@echo "Création de l'archive ${NAME}..."
		${AR} ${ARFLAGS} $@ $^
		@echo "${NAME} créé avec succès !"

# Règle pour compiler les fichiers source en objets
${SRCS}%.o : ${SRCS}%.c
		@echo "Compilation de $<..."
		${CC} ${CFLAGS} -I ../includes -o $@ -c $<
		@echo "Fichier objet $@ généré."

# Règle pour ajouter les fichiers bonus
bonus: ${BONUS_OBJECTS}
		@echo "Ajout des bonus à ${NAME}..."
		${AR} ${ARFLAGS} ${NAME} ${BONUS_OBJECTS}
		@echo "Bonus ajoutés à ${NAME} avec succès !"

# Nettoyer les fichiers objets
clean :
		@echo "Suppression des fichiers objets..."
		rm -rf ${OBJECTS} ${BONUS_OBJECTS} $(NAME)
		@echo "Fichiers objets supprimés."

# Nettoyer les fichiers objets et l'archive
fclean : clean
		@echo "Suppression de l'archive ${NAME}..."
		rm -rf ${NAME}
		@echo "${NAME} supprimé avec succès."

# Recompiler tout depuis le début
re : fclean all

# Spécifie que ces règles ne correspondent pas à des fichiers
.PHONY: all clean fclean re
