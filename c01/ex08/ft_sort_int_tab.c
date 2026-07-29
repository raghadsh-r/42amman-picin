/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 10:17:55 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/12 13:43:47 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index_two;
	int	key;

	index = 0;
	while (index < size)
	{
		index_two = index - 1;
		key = tab[index];
		while (index_two >= 0 && tab[index_two] > key)
		{
			tab[index_two + 1] = tab[index_two];
			index_two--;
		}
		tab[index_two + 1] = key;
		index++;
	}
}

/*int main ()
{	int size=5;
	int index =0;
	int a[5]={1,6,3,9,3};
	ft_sort_int_tab(a,5);
	while(index < size)
	{
		char c=a[index]+'0';
		write(1,&c,1);
		index++;;
	}	

}*/	
