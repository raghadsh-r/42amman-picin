/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:04:24 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/27 10:43:37 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	c = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

/*int main ()
{
	char c[]="raghad";
	printf("%s",ft_strdup(c));
}*/	
