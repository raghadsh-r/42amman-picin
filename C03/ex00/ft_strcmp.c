/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 09:03:50 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/18 15:22:19 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	flag;
	int	index;

	index = 0;
	flag = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] == s2[index])
		{
			flag = 0;
		}
		else if (s1[index] > s2[index])
		{
			flag = (s1[index] - '0') - (s2[index] - '0');
			break ;
		}
		else if (s1[index] < s2[index])
		{
			flag = s1[index] - s2[index];
			break ;
		}
		index ++;
	}
	return (flag);
}

/*int main()
{
	char c[]="hil";
	char d[]="hi";
	int i=ft_strcmp(c,d);
	printf("%d",i);


}*/
