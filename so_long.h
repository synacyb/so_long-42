#ifndef SO_LONG_H
#define SO_LONG_H

#include "minilibx-linux/mlx.h"
#include "get_next_line/get_next_line.h"

// strcut for read map
typedef struct s_map
{
	char    **map;
	char    **copy_map;
	int     rows;
	int     columns;
}t_map;


int custom_error(char *msg, int exit_code);
int check_map_name(char *str);
#endif