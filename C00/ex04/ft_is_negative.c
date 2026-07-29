/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 11:20:37 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/09 09:25:41 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg_number;
	char	pos_num;

	neg_number = 'N';
	pos_num = 'P';
	if (n < 0)
		write(1, &neg_number, 1);
	else
		write(1, &pos_num, 1);
}
