/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:13:19 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/26 10:18:31 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 1 || nb <= 0)
		return (0);
	i = 2;
	while (nb > i)
	{
		if (nb % i != 0)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int main ()
{
printf("%d",ft_is_prime(0));
//printf("%d",ft_is_prime(4));
//printf("%d",ft_is_prime(8));

}*/	
