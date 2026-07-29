/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:54:45 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/23 09:39:11 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	count;

	count = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > (0))
	{
		count *= i;
		i = nb;
		power--;
	}
	return (count);
}

/*int main ()
{
printf("%d",ft_iterative_power(4,1));


}*/	
