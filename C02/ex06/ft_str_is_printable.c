/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:15:41 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/15 12:01:04 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	index;
	int	flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= ' ' && str[index] <= '~')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break ;
		}
		index++;
	}
	return (flag);
}

/*int main()
{
char b[]="akjhdghsh";
char a=t_str_is_printable(b)+'0';
write(1,&a,1);

}*/
