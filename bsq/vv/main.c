/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 17:35:26 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/28 20:51:04 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(char **ptr, int row, int colum)
{
	int	i;
	int	j;

	i = 0;
	while (row > i)
	{
		j = 0;
		while (colum > j)
		{
			write(1, &ptr[i][j], 1);
			j++;
		}
		i++;
		if (row > i)
			write(1, "\n", 1);
	}
}

int	validate_row_num(char *arg, int rows, int cols)
{
	int		fd;
	char	*num_str;

	num_str = malloc(cols * sizeof(char));
	fd = open(arg, O_RDONLY);
	read(fd, num_str, cols);
	if (ft_atoi(num_str) == rows)
	{
		free(num_str);
		return (1);
	}
	else
	{
		free(num_str);
		return (0);
	}
}

char	find_char(char *arg, int idx)
{
	int		i;
	int		fd;
	char	c[2];

	i = 0;
	fd = open(arg, O_RDONLY);
	read (fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
		read(fd, c, 1);
	read(fd, c, 2);
	close(fd);
	return (c[idx]);
}

int	main(int argc, char **argv)
{
	char	**ptr;
	int		i;
	int		row_col[2];
	char	chars_list[2];

	i = 1;
	while (argc > i)
	{
		row_col[0] = count_row(argv, i);
		row_col[1] = count_colum(argv, i);
		if (validate_row_num(argv[i], row_col[0], row_col[1]))
		{
			chars_list[0] = find_char(argv[i], 0);
			chars_list[1] = find_char(argv[i], 1);
			ptr = make_array(row_col[0], row_col[1]);
			ptr = fill_the_array(ptr, argv, row_col, i);
			solve_map(ptr, row_col[0], row_col[1], chars_list);
			print(ptr, row_col[0], row_col[1]);
		}
		else
			write(1, "error", 6);
		i++;
		if (argc > 1)
			write(1, "\n", 1);
	}
}
