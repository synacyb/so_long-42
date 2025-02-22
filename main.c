/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:50:17 by ayadouay          #+#    #+#             */
/*   Updated: 2025/02/22 16:50:18 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// int map_height(int fd)
// {
// 	char *res;
// 	t_map	data;

// 	while (1)
// 	{
// 		res = get_next_line(fd);
// 		if (!res)
// 			break ;
// 		data.height++;
// 		free(res);
// 	}
// 	return(data.height);
// }

int main(int ac, char **av)
{
	t_map	map;

	if (ac != 2)
		custom_error("please enter the program name and map", 1);
	if (!check_map_name(av[1]))
		custom_error("map name is invalid", 1);
	if (!check_map(&map))
		custom_error("map name is invalid", 1);
}