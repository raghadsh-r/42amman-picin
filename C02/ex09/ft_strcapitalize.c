/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:36:32 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/15 12:03:14 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	is_symbol(char c)
{
	if (!(((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			|| (c >= '0' && c <= '9')))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		index++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	index = 0;
	while (str[index] != '\0')
	{
		if (is_symbol(str[index]) == 1)
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
				str[index + 1] -= 32;
		}
		index++;
	}
	return (str);
}

/*int main()
{	

        char d[]="	hi , how are you ? 42 words foCrty-two; fifty+a+and+one";
        ft_strcapitalize(d);
        printf("%s", d);


}*/
