/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:06:16 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/25 16:26:43 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	i;

	count = 1;
	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		count *= i;
		i++;
		nb--;
	}
	return (count);
}
/*int main ()
{
	printf("%d",ft_iterative_factorial(4));

}*/	
