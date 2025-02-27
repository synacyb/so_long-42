/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:32:03 by ayadouay          #+#    #+#             */
/*   Updated: 2025/02/27 12:00:25 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"


	// int	fd;

	// fd = open(filename, O_RDONLY);
	// map->_0 = 0;
	// map->_1 = 0;
	// map->p = 0;
	// map->c = 0;
	// map->e = 0;
	// if (!check_valid_character(fd, map))
	// 	return (0);
	// map->copy_map = read_map(fd, map, filename);
	// if (!map->copy_map)
	// 	return (0);
	// if (!check_size_map(map))
	// 	return (free_array(map->copy_map, map->rows), 0);
	// if (!flood_fill(map))
	// 	return (free_array(map->copy_map, map->rows), 0);
	// if (!check_edges_map(map))
	// 	return (free_array(map->copy_map, map->rows), 0);
	// map->map = read_map(fd, map, filename);
	// free_array(map->copy_map, map->rows);
	// return (1);
int	count_rows(int fd)
{
	int	len;
	len = 0;
	char *res;
	while (1)
	{
		res = get_next_line(fd);
		if (!res)
			break ;
		len++;
		free(res);
	}
	lseek(fd, 0, SEEK_SET);
	return len;
}

void	creat_matrix(int fd, t_map *data)
{
	data->copy_map = malloc(data->rows * sizeof(char *));
	int index = 0;
	char *res;
	while (1)
	{
		res = get_next_line(fd);
		if (!res)
			break ;
		data->copy_map[index] = res;
		index++;
	}
	data->copy_map[index] = NULL;
	lseek(fd, 0, SEEK_SET);
}

int	check_map(char *file_name, t_map *data)
{
	int fd = open(file_name, O_RDONLY);
	data->rows = count_rows(fd);
	creat_matrix(fd, data);
	data->columns = ft_strlen(data->copy_map[0]);
	if (!check_all_cases)
		return(0);
	
}