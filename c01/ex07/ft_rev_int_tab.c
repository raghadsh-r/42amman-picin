/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 18:05:09 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/12 16:48:46 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	begin;
	int	end;
	int	a;

	begin = 0;
	end = size - 1;
	while (begin != (size / 2))
	{
		a = tab[begin];
		tab[begin] = tab[end];
		tab[end] = a;
		end--;
		begin++;
	}
}
/*int main()
{	int i=0;
  int size=10;
  int a[10]={2,3,3,5,2,1,8,9,6,4};
  //int *pointer=a;
 ft_rev_int_tab(a,10);
while(size!=0) 
{	
	char c =a[i]+'0';
	write(1,&c,1);
	i++;
	size--;
		
}
}*/
