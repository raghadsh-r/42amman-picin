/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 17:22:24 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/26 08:49:52 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;
	int	f;

	j = nb ;
	if (nb <= 2)
		return (2);
	else
	{
		while (j > 0)
		{
			i = 2;
			f = 1;
			while (j > i)
			{
				if (j % i == 0)
					f = 0;
				i++;
			}
			if (f == 1)
				break ;
			j++;
		}
	}
	return (j);
}

/*#include <stdio.h>
int main()
{

	printf("%d",ft_find_next_prime(1001));
}*/	
