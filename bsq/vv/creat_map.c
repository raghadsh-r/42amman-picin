/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:38:21 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/28 20:44:12 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**make_array(int row, int colum )
{
	char	**ptr;
	int		i;

	ptr = malloc(sizeof (char *) * row);
	i = 0;
	while (row--)
	{
		ptr[i] = malloc(sizeof(char) * colum);
		i++;
	}
	return (ptr);
}

char	**fill_the_array(char **ptr, char **argv, int *rc, int r)
{
	char	buf[2];
	int		i;
	int		j;
	int		fd;

	i = 0;
	fd = open(argv[r], O_RDONLY);
	while (buf[0] != '\n')
	{
		read(fd, buf, 1);
	}
	while (rc[0] > i)
	{
		j = 0;
		while (rc[1] + 1 > j)
		{
			read(fd, buf, 1);
			if (buf[0] != '\n')
				ptr[i][j] = buf[0];
			j++;
		}
		i++;
	}
	return (ptr);
}

void	fill_nodes(int **map, char **map_s, int rows, char *chars_list)
{
	int	i;
	int	*row_pre;

	row_pre = malloc(5 * sizeof(int));
	i = 0;
	while (i < rows)
	{
		if (i != 0)
			row_pre = map[i - 1];
		lrg_on_node(map[i], row_pre, map_s[i], chars_list[0]);
		i++;
	}
}

void	fill_map(char **map, int *lrg_sqr, char *chars_list)
{
	int	i;
	int	j;

	i = lrg_sqr[1] - lrg_sqr[0] + 1;
	while (i <= lrg_sqr[1])
	{
		j = lrg_sqr[2] - lrg_sqr[0] + 1;
		while (j <= lrg_sqr[2])
		{
			map[i][j] = chars_list[1];
			j++;
		}
		i++;
	}
}
