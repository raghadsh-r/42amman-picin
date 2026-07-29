/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:21:28 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/18 16:17:29 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	extract_data(char *src, int *dest);
int	check_row_col_input(int *dest);
int	check_facing_values(int *dest);

int	main(int argc, char **argv)
{
	int	arr[16];
	int	is_vailed;

	if (argc != 2)
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	is_vailed = extract_data(argv[1], arr);
	if (is_vailed == 0)
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	if (check_row_col_input(arr) == 0 || check_facing_values(arr) == 0)
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	rush01(arr);
	return (0);
}
