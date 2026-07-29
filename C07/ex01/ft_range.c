/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:19:30 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/28 10:16:36 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*ptr;
	int	i;

	i = 0;
	if(min >= max)
	{
		return('\0');
		ptr = NULL ;
	}		
	ptr = (int *) malloc(sizeof(int) * (max - min));
	if(min == -2147483648)
		ptr[0] = -2147483648;
	while(min != max)
	{
		ptr[i]=min;
		min++;
		i++;
	}
	return(ptr);
}	
