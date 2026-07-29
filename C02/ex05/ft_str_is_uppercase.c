/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:13:16 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/14 16:12:09 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
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
char a=ft_str_is_uppercase(b)+'0';
write(1,&a,1);

}*/
