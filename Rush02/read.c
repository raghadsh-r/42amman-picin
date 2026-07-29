/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:33:02 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/25 16:41:14 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 1024

char	*array_for_word(int fd)
{
	char	buf[BUF_SIZE];
	char	word[][];
	int		numread;
	int		i;
	int		j;

	j = 0;
	i = 0;
	numread = read(fd, buf, BUF_SIZE - 1);
	while (numread > i)
	{
		if (buf[i] == '\n')
		{
			j++;
			d = 0;
		}
		while ((buf[i] >= 'A' && buf[i] <= "Z") || (buf[i] >= 'a' &&buf[i] <= "z"))
		{
			word[j][d] = buf[i];
			i++;
			d++;
		}
		i++;
	}
	return (word);
}

char	*array_for_number(int fd)
{
	char	buf[BUF_SIZE];
        char	numbre[];
        int		numRead;
	int		j;
	int		f;
	int		i;
	int		num;

	i = 0;
	j = 0;
	numRead = read(fd, buf, BUF_SIZE - 1);
	while (numRead > i)
	{
		num = 0;
		f = 0;
		while (buf[i] >= '0' && buf[i] <= '9')
		{
			num = (num *10) + (buf[i] - '0' );
			i++;
		 	f = 1
		}
		if (f == 1)
		{
			arr[j] = num;
			j++;
		}
	i++;
	}
	return (number)
}

int count_row(int fd)
{
	int count = 0;
	int i = 0;
	int space = 0;
	int j=0;
	char buf[BUF_SIZE];
	int  numRead = read(fd , buf, BUF_SIZE - 1);
	int x = numRead;
	while( x > 0)
	{
		if(buf[i] == '\n')
			count++;
		i++;
		x--;
	}
	return count;
}	

int main (int argc , char **argv)
{
	char num[];
	char word[];
	int fd = open(argv[1], O_RDONLY);
	if(fd!= -1)
	{
		if(count_row(fd) > 0);
			num = array_for_number(fd);
			word = array_for_word(fd,count_row(fd));
	}
	else 
	{
		printf("ERROR");
	}
}	
