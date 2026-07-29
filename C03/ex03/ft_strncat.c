/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:00:12 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/18 15:45:27 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_dest;
	unsigned int	index_src;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}
	while (src[index_src] != '\0' && nb > 0)
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
		nb--;
	}
	dest[index_dest] = '\0';
	return (dest);
}

/*int main()
{
        char dis[]="hello";
        char sour[10]=" world!";

        ft_strncat(dis,sour,5);
        printf("%s",dis);


}*/
