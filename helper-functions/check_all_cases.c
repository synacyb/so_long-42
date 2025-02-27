/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_cases.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 09:26:49 by ayadouay          #+#    #+#             */
/*   Updated: 2025/02/27 12:21:31 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../so_long.h>

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
    //check first row if have a valid wall!
    while (data->copy_map[0][s_data.j] && s_data.j < data->columns)
    {
        if (data->copy_map[0][s_data.j] != '1')
            return 0;
        s_data.j++;
    }
    s_data.j = 0;
    while (data->copy_map[data->rows][s_data.j] && s_data.j < data->columns)
    {
        if (data->copy_map[data->rows][s_data.j] != '1')
            return 0;
        s_data.j++;
    }
    while(data->copy_map[s_data.i][0] && data->copy_map[s_data.i])
    {
        if (data->copy_map[s_data.i][0] != '1')
            return 0;
        s_data.i++;
    }
    while(data->copy_map[s_data.i][data->columns - 1] && data->copy_map[s_data.i])
    {
        if (data->copy_map[s_data.i][data->columns - 1] != '1')
            return 0;
        s_data.i++;
    }
    return 1;
}
int check_all_cases(t_map *data)
{
    if(!is_rectangular(data))
        return(free_matrix(data), 0);
    
}