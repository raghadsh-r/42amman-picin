/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 13:19:37 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/11 18:16:06 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	header(int width)
{
	int	save_width;

	save_width = width;
	ft_putchar('/');
	width -= 2;
	while (width > 0)
	{
		ft_putchar('*');
		width--;
	}
	if (save_width >= 2)
	{
		ft_putchar('\\');
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
		ft_putchar('*');
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
			ft_putchar('*');
			ft_putchar('\n');
		}
		height--;
	}
}

void	footer(int width)
{
	int	save_width;

	save_width = width;
	ft_putchar('\\');
	width -= 2;
	while (width > 0)
	{
		ft_putchar('*');
		width--;
	}
	if (save_width >= 2)
	{
		ft_putchar('/');
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
