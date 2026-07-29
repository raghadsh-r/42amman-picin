/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_node_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:22:21 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/28 18:27:03 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	min(int i1, int i2, int i3)
{
	if (i1 < i2 && i1 < i3)
		return (i1);
	else if (i2 < i3)
		return (i2);
	return (i3);
}

void	lrg_on_node(int *row, int *row_pre, char *row_s, char obstcl)
{
	int	i;
	int	cols;

	cols = 0;
	while (row_s[cols])
		cols++;
	i = 0;
	while (i < cols)
	{
		if (row_s[i] == obstcl)
			row[i] = 0;
		else
		{
			if (i == 0)
				row[i] = 1;
			else
				row[i] = min(row[i - 1], row_pre[i], row_pre[i - 1]) + 1;
		}
		i++;
	}
}

int	*lrg_in_map(int **map, int rows, int cols)
{
	int	i;
	int	j;
	int	*lrg_sqr;

	i = 0;
	lrg_sqr = malloc(3 * sizeof(int));
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (map[i][j] > lrg_sqr[0])
			{
				lrg_sqr[0] = map[i][j];
				lrg_sqr[1] = i;
				lrg_sqr[2] = j;
			}
			j++;
		}
		i++;
	}
	return (lrg_sqr);
}
