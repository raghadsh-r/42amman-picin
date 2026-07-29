/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 14:47:23 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/14 17:53:23 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'A' && str[index] <= 'Z')
			|| (str[index] >= 'a' && str[index] <= 'z'))
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
char b[]="kfdvjdbjfd";
char a=ft_str_is_alpha(b)+'0';
write(1,&a,1);

}*/	
