/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 14:07:20 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/14 11:02:50 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int main ()
{
	char c[5]="rghas";
	char b[5];
	int i=0;
	int size=5;
	ft_strcpy(b,c);
	while(size>0)
	{
		write(1,b+i,1);
		i++;
		size--;

	}	



}*/
