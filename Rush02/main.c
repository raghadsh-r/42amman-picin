/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:59:26 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/25 15:53:21 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

	

int is_vailed(char *str)
{
	int	index;
	
	index = 0;
	while (str[index]!='\0')
	{
		if(!(str[index] >= '0' && str[index] <= '9'))
		{
			return (0);	
		}
		index++;
	}
	return (1);
}	

int     main(int argc, char **argv)
{
        char    *dictionary;
        char    *number;
        int     i;

        i = 0;
        dictionary = '\0';
        number = '\0';
        if (argc != 2 && argc != 3)
        {
                print_error();
                return (0);
        }
        if (argc == 2)
        {
                dictionary = "numbers.dict";
                number = argv[1];
        }
        else if (argc == 3)
        {
                dictionary = argv[1];
                number = argv[2];
        }
        if (is_valid_digit(number) == 0)
        {
                print_error();
                return (0);
        }
        i = 0;
        while (number[i] == '0' && number[i + 1] != '\0')
        {
                i++;
        }
        number = &number[i];
        return (0);
}


