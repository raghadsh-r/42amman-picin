/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_vailed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 11:27:55 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/18 17:25:14 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_col_facing2(int *dest)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < 12)
	{
		if (i == 4)
		{
			count = 0;
			i = 8;
		}
		if (dest[i] == 2 && dest[i + 4] == 2)
			count++;
		if (count == 3)
			return (0);
		i++;
	}
	return (1);
}

int	check_facing_values(int *dest)
{
	int	count;
	int	facing_value;

	facing_value = 0;
	count = 0;
	if (check_row_col_facing2(dest) == 0)
		return (0);
	while (count <= 11)
	{
		facing_value = dest[count] + dest[count + 4];
		if (!(facing_value >= 3 && facing_value <= 5))
			return (0);
		if (count == 3)
			count = 8;
		else
			count++;
	}
	return (1);
}

int	*reset_count(int *count)
{
	count[0] = 0;
	count[1] = 0;
	count[2] = 0;
	count[3] = 0;
	return (count);
}

int	check_row_col_input(int *dest)
{
	int	count[4];
	int	i;

	count[0] = 0;
	count[1] = 0;
	count[2] = 0;
	count[3] = 0;
	i = 0;
	while (i < 16)
	{
		if (i == 4 || i == 8 || i == 12)
			count = reset_count(count);
		if (dest[i] == 1)
			count_1++;
		else if (dest[i] == 2)
			count_2++;
		else if (dest[i] == 3)
			count_3++;
		else if (dest[i] == 4)
			count_4++;
		if (count[0] == 2 || count[1] == 4 || count[2] == 3 || count[3] == 2)
			return (0);
		i++;
	}
	return (1);
}
