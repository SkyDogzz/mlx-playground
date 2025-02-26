NAME = mlx_playground
CC = cc
CFLAGS = -Wall -Wextra -Werror

ifndef DEBUG
	CFLAGS += -g3
endif
ifndef FSAN
	CFLAGS += -fsanitize=address
endif

SRC_DIR = src
UTILS_DIR = src/utils
EVENT_DIR = src/event
MLX_DIR = .minilibx
LIBFT_DIR = libft
OBJ_DIR = obj
INC_DIR = include

SRC = $(wildcard $(SRC_DIR)/*.c)
SRC_MATH = $(wildcard $(MATH_DIR)/*.c)
SRC_UTILS = $(wildcard $(UTILS_DIR)/*.c)
SRC_EVENT = $(wildcard $(EVENT_DIR)/*.c)
SRCS = $(SRC) $(SRC_MATH) $(SRC_UTILS) $(SRC_EVENT)

OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC)) \
       $(patsubst $(UTILS_DIR)/%.c, $(OBJ_DIR)/utils_%.o, $(SRC_UTILS)) \
       $(patsubst $(EVENT_DIR)/%.c, $(OBJ_DIR)/event_%.o, $(SRC_EVENT))

INCLUDES = -I$(MLX_DIR) -I$(LIBFT_DIR) -I$(INC_DIR)

all: $(NAME)

$(NAME): mlx libft $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(MLX_DIR) -lmlx -lm -L$(LIBFT_DIR) -lft -lX11 -lXext -o $(NAME)

mlx: $(MLX_DIR)/libmlx.a

$(MLX_DIR)/libmlx.a:
	if [ ! -d "$(MLX_DIR)" ]; then \
		git clone https://github.com/42Paris/minilibx-linux --depth=1 $(MLX_DIR); \
	fi
	make -C $(MLX_DIR)

libft: $(LIBFT_DIR)/libft.a

relibft:
	rm -rf $(LIBFT_DIR)
	make libft

$(LIBFT_DIR)/libft.a:
	if [ ! -d "$(LIBFT_DIR)" ]; then \
		git clone https://github.com/skydogzz/ft_ft --depth=1 $(LIBFT_DIR); \
	fi
	make -C $(LIBFT_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/utils_%.o: $(UTILS_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
$(OBJ_DIR)/event_%.o: $(EVENT_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	rm -rf $(MLX_DIR)
	rm -rf $(LIBFT_DIR)

re: fclean all

