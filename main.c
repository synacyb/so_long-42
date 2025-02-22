#include "so_long.h"

int map_height(int fd)
{
	char *res;
	t_map	data;

	while (1)
	{
		res = get_next_line(fd);
		if (!res)
			break ;
		data.height++;
		free(res);
	}
	return(data.height);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "pls enter the valid map.ber!", 29);
		exit(1);
	}
	
}