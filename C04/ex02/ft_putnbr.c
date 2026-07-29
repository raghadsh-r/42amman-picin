/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:42:52 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/25 08:28:59 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	b;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	b = (nb % 10) + '0';
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	write(1, &b, 1);
}

/*int main ()
{
ft_putnbr(0);
ft_putnbr(10);
ft_putnbr(700);
ft_putnbr(704502);
ft_putnbr(70064);
ft_putnbr(7007800);
}*/	
