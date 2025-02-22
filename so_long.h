#ifndef SO_LONG_H
#define SO_LONG_H

#include "minilibx-linux/mlx.h"
#include "get_next_line/get_next_line.h"

// strcut for read map
typedef struct s_map
{
	char    **matrix;
	int     width;      // Number of columns (map width)
	int     height;     // Number of rows (map height)
}t_map;

#endif