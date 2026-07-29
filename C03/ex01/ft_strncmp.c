/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 12:41:16 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/18 15:27:34 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	unsigned int	flag;

	index = 0;
	flag = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && n > 0)
	{
		if (s1[index] == s2[index])
		{
			flag = 0;
		}
		else if (s1[index] > s2[index])
		{
			flag = (s1[index] - '0') - (s2[index] - '0');
			break ;
		}
		else if (s1[index] < s2[index])
		{
			flag = s1[index] - s2[index];
			break ;
		}
		index++;
		n--;
	}
	return (flag);
}

/*int main()
{
        char c[]="hil";
        char d[]="hi";
        int i=ft_strncmp(c,d,1);
        printf("%d",i);


}*/
