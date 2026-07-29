/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 13:06:47 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/11 18:10:26 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	header_and_footer(int width)
{
	int	save_width;

	save_width = width;
	ft_putchar('o');
	width -= 2;
	while (width > 0)
	{
		ft_putchar('-');
		width--;
	}
	if (save_width >= 2)
	{
		ft_putchar('o');
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
		ft_putchar('|');
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
			ft_putchar('|');
			ft_putchar('\n');
		}
		height--;
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
		header_and_footer(width);
		ft_putchar('\n');
		if (height > 2)
		{
			body (width, height);
		}
		if (height > 1)
		{
			header_and_footer(width);
		}
	}
}
