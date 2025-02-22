/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:32:03 by ayadouay          #+#    #+#             */
/*   Updated: 2025/02/22 16:50:24 by ayadouay         ###   ########.fr       */
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