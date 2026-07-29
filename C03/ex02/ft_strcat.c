/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:01:58 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/16 09:15:27 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index_dest;
	int	index_src;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}
	while (src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	return (dest);
}

/*int main()
{
	char sour[]="hi";
	char dis[10]="dye";

	ft_strcat(dis,sour);
	printf("%s",dis);


}*/
