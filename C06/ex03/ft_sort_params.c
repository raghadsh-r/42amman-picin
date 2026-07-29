/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 10:19:27 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/26 15:37:53 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

void	for_print(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc > i)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*c;
	int		i;
	int		x;
	int		y;

	i = 1;
	while (argc > i)
	{
		x = i + 1;
		while (argc > x)
		{
			y = ft_strcmp(argv[i], argv[x]);
			if (y > 0)
			{
				c = argv[i];
				argv[i] = argv[x];
				argv[x] = c;
			}
			x++;
		}
		i++;
	}
	for_print(argc, argv);
}
