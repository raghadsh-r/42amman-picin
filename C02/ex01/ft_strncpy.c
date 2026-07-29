/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:20:10 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/15 11:59:10 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	unsigned int	save_n;

	index = 0;
	save_n = n;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/*int main()
{
char b[]="raghad";
char d[]="marahrght";
int i=0;
ft_strncpy(d,b,10);
while(d[i]!='\0')
{  write(1,&d[i],1);	
   i++;   
}	
}*/
