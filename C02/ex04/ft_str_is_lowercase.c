/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:09:32 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/14 18:00:01 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
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
char a=ft_str_is_numeric(b)+'0';
write(1,&a,1);

}*/
