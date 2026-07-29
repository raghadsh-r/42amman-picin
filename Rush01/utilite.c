/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilite.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 13:16:52 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/18 15:57:57 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	extract_data(char *src, int *dest)
{
	int	index;
	int	odd;
	int	even;

	index = 0;
	odd = 1;
	even = 0;
	while (src[index] != '\0')
	{
		if (src[even] >= '1' && src[even] <= '4')
		{
			*dest++ = src[even] - '0';
			even += 2;
		}
		else if (src[odd] == ' ')
		{
			odd += 2;
		}
		else
		{
			return (0);
		}
		index++;
	}
	return (1);
}

int	print_grid(int *grid)
{
	int	row;
	int	colum;

	row = 0;
	colum = 0;
	while (row < 4)
	{
		colum = 0;
		while (colum < 4)
		{
			write(1, &grid[row][colum], 1);
			write(1, " ", 1);
			colum++;
		}
		write(1, "\n", 1);
		row++;
	}
}
