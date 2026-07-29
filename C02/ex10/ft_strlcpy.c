/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:35:57 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/15 12:08:20 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	index = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size > 0)
	{
		while (index < size - 1 && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
	}
	dest[index] = '\0';
	return (count);
}

/*int main()
{
char b[]="raghadhhfghhhghghghghghggh";
char d[]="marahrght";
char i;
i =ft_strlcpy(d, b, 9)+'0';
     int index =0;
      while(d[index]!='\0')
	{	
		write(1,&d[index],1);
			index++;
	}		
}*/
