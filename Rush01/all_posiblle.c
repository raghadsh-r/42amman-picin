/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_posiblle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 16:22:07 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/18 16:28:59 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	permute(int **result, int *count, int *arr, int start)
{
	int	curser;

	if (start == 4)
	{
		result[*count][0] = arr[0];
		result[*count][1] = arr[1];
		result[*count][2] = arr[2];
		result[*count][3] = arr[3];
		(*count)++;
		return ;
	}
	curser = start;
	while (curser < 4)
	{
		swap(&arr[start], &arr[curser]);
		permute(result, count, arr, start + 1);
		swap(&arr[start], &arr[curser]);
		curser++;
	}
}

void	fill_all_possible(int **all_possible)
{
	int	count;
	int	base_arr[4];

	base_arr[0] = 1;
	base_arr[1] = 2;
	base_arr[2] = 3;
	base_arr[3] = 4;
	count = 0;
	permute(all_possible, &count, base_arr, 0);
}
