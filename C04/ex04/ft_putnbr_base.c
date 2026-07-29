/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 10:20:40 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/24 14:09:43 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_vailed(char *str)
{
	int	index;
	int	j;

	j = 0;
	index = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[index] != '\0')
	{
		if (str[index] == '+' || str[index] == '-')
		{
			return (0);
		}
		j = index + 1;
		while (str[j] != '\0')
		{
			if (str[index] == str[j])
			{
				return (0);
			}
			j++;
		}
		index++;
	}
	return (1);
}

int	counts(char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
		count++;
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int long	num;
	int			count;
	int			b;

	num = nbr;
	count = counts(base);
	if (is_vailed(base))
	{
		if (num < 0)
		{
			num *= -1;
			write(1, "-", 1);
		}
		b = (num % count);
		if (num / count > 0)
		{
			ft_putnbr_base((num / count), base);
		}
		write(1, &base[b], 1);
	}
}

//int main()
//{
//ft_putnbr_base(840,"01");
//ft_putnbr_base(-278,"01");
//}
