/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:59:02 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/28 17:20:13 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	count_row(char **argv, int r)
{
	char	buf[BUF_SIZE];
	int		count;
	int		i;
	int		numread;
	int		fd;

	count = 0;
	i = 0;
	fd = open(argv[r], O_RDONLY);
	numread = read(fd, buf, BUF_SIZE - 1);
	while (numread > i)
	{
		if (buf[i] == '\n')
			count++;
		i++;
	}
	return (count - 1);
}

int	count_colum(char **argv, int r)
{
	char	buf[1024];
	int		count;
	int		i;
	int		numread;
	int		fd;

	count = 0;
	i = 0;
	fd = open(argv[r], O_RDONLY);
	numread = read(fd, buf, BUF_SIZE - 1);
	while (buf[i] != '\n')
	{
		i++;
	}
	i++;
	while (buf[i] != '\n')
	{
		count++;
		i++;
	}
	return (count);
}
