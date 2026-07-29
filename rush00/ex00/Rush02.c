/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 13:55:04 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/11 18:19:16 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	header(int width)
{
	int	save_width;

	save_width = width;
	ft_putchar('A');
	width -= 2;
	while (width > 0)
	{
		ft_putchar('B');
		width--;
	}
	if (save_width >= 2)
	{
		ft_putchar('A');
	}
}

void	body(int width, int height)
{
	int	save_width;

	width -= 2;
	save_width = width;
	height -= 2;
	while (height > 0)
	{
		ft_putchar('B');
		width = save_width;
		while (width > 0)
		{
			ft_putchar(' ');
			width--;
		}
		if (save_width < 2)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		height--;
	}
}

void	footer(int width)
{
	int	save_width;

	save_width = width;
	ft_putchar('C');
	width -= 2;
	while (width > 0)
	{
		ft_putchar('B');
		width--;
	}
	if (save_width >= 2)
	{
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = x;
	height = y;
	if (height > 0 && width > 0)
	{
		header(width);
		ft_putchar('\n');
		if (height > 2)
		{
			body (width, height);
		}
		if (height > 1)
		{
			footer(width);
		}
	}
}
