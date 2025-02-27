/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:24:31 by ayadouay          #+#    #+#             */
/*   Updated: 2025/02/27 10:30:10 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    free_matrix(t_map *data)
{
    t_sdata s_data;
    s_data.i = 0;

    while (data->copy_map[s_data.i])
        s_data.i++;
    
    s_data.i--;
    while (s_data.i >= 0)
        free(data->copy_map[s_data.i]);
    free(data->copy_map);
}