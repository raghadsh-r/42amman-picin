/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slove.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:56:06 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/28 16:58:31 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	solve_map(char **map, int rows, int cols, char *chars_list)
{
	int	*lrg_sqr;
	int	**map_nodes;
	int	i;

	map_nodes = malloc(rows * sizeof(int *));
	i = 0;
	while (i < rows)
	{
		map_nodes[i] = malloc(cols * sizeof(int));
		i++;
	}
	fill_nodes(map_nodes, map, rows, chars_list);
	lrg_sqr = lrg_in_map(map_nodes, rows, cols);
	fill_map(map, lrg_sqr, chars_list);
}
