/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 12:05:20 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/12 16:48:21 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str) != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
//int main ()
//{
//char *p;
//p="ste";
//printf("%d",ft_strlen(p));
//return 0;
//}
