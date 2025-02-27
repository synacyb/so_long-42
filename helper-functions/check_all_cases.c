/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_cases.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:26:49 by ayadouay          #+#    #+#             */
/*   Updated: 2025/02/27 15:54:51 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int is_rectangular(t_map *data)
{
    t_sdata s_data;

    s_data.len = ft_strlen(data->copy_map[0]);
    s_data.i = 1;
    while (data->copy_map[s_data.i])
    {
        s_data.j = 0;
        s_data.j = ft_strlen(data->copy_map[s_data.i]);
        if (s_data.len != s_data.j)
            return 0;
        s_data.i++;
    }
    return 1;
}
int is_closed_by_walls(t_map *data)
{
    t_sdata s_data;

    s_data.i = 0;
    s_data.j = 0;

    while (data->copy_map[0][s_data.j] && s_data.j < data->columns - 1)
    {
        if (data->copy_map[0][s_data.j] != '1')
            return 0;
        s_data.j++;
    }
    s_data.j = 0;
    //check the last row ! 
    while (data->copy_map[data->rows - 1][s_data.j] && s_data.j < data->columns - 1)
    {
        if (data->copy_map[data->rows - 1][s_data.j] != '1')
            return 0;
        s_data.j++;
    }
    while(s_data.i < data->rows)
    {
        if (data->copy_map[s_data.i][0] != '1')
            return 0;
        s_data.i++;
    }
    s_data.i = 0;
    while(s_data.i < data->rows)
    {
        if (data->copy_map[s_data.i][data->columns - 2] != '1')
            return 0;
        s_data.i++;
    }
    return 1;
}
int check_all_cases(t_map *data)
{
    if(!is_rectangular(data))
        return (perror("this map is not rectangular\n"), 0);
    if(!is_closed_by_walls(data))
        return (perror("Error this walls!"), 0);
    return (1);
}