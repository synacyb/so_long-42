#ifndef SO_LONG_H
#define SO_LONG_H

#include "minilibx-linux/mlx.h"
#include "get_next_line/get_next_line.h"
#include "libft/libft.h"
#include <string.h>
#include <stdio.h>

//simple data
typedef struct s_data
{
	int	len;
	int i;
	int j;
	char *res;
}t_sdata;

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
int	check_map(char *file_name, t_map *data);
void    free_matrix(t_map *data);
int check_all_cases(t_map *data);
#endif