/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:04:46 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/14 16:11:31 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	index;	
	int	flag;

	index = 0;
	flag = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
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
char b[]="327484674370";
char a=ft_str_is_numeric(b)+'0';
write(1,&a,1);

}*/
