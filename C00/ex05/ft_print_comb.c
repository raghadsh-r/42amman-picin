/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 11:59:00 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/09 15:38:03 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	for_print(int num_one, int num_two, int num_three)
{
	write(1, &num_one, 1);
	write(1, &num_two, 1);
	write(1, &num_three, 1);
	if (num_one != '7' || num_two != '8' || num_three != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	num_one;
	char	num_two;
	char	num_three;

	num_one = '0';
	while (num_one <= '7')
	{
		num_two = num_one + 1;
		while (num_two <= '8')
		{
			num_three = num_two + 1;
			while (num_three <= '9')
			{
				for_print(num_one, num_two, num_three);
				num_three++;
			}
			num_two++;
		}
		num_one++;
	}
}
