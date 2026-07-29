/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 10:13:44 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/28 11:36:14 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int i;
	int x;

	x = min;
	range= malloc(sizeof(int*)* 2);
	range[0] = malloc(sizeof(int) * (max - min));
	if(min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	i = 0;
	if(!range[0])
		return(-1);
	while(max > min)
	{
		range[0][i] = min ;
		min++;
		i++;
	}
	return(max - x);

}


int main()
{
	int **ptr;
	printf("%d",ft_ultimate_range(ptr,0,0));

}
