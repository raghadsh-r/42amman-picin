/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:54:10 by absafi            #+#    #+#             */
/*   Updated: 2026/07/18 13:25:40 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_all_possible(void);

void	print_grid(int *grid);

int	is_in_col(int **grid, int row)
{
	int	temp_row;
	int	temp_col;

	temp_col = 0;
	while (temp_col < 4)
	{
		temp_row = 0;
		while (temp_row < row)
		{
			if (grid[temp_row][temp_col] == grid[row][temp_col])
				return (1);
			temp_row++;
		}
		temp_col++;
	}
	return (0);
}

int	view_row(int *row, int left, int right)
{
	int	curser;
	int	view;
	int	temp_max;

	view = 0;
	curser = 0;
	temp_max = 0;
	while (curser < 4 && temp_max < 4)
	{
		if (row[curser] > temp_max)
		{
			temp_max = row[curser];
			view++;
		}
		curser++;
	}
	if (left != view)
		return (0);
	view = 0;
	temp_max = 0;
	curser = 3;
	while (curser >= 0 && temp_max < 4)
	{
		if (row[curser] > temp_max)
		{
			temp_max = row[curser];
			view++;
		}
		curser--;
	}
	if (right != view)
		return (0);
	return (1);
}

int	check_cols(int **grid, int *edges)
{
	int	col;
	int	row;
	int	view;
	int	temp_max;

	col = 0;
	// column by column
	while (col < 4)
	{
		view = 0;
		temp_max = 0;
		row = 0;
		// upper edge of curent column
		while (row < 4)
		{
			if (grid[row][col] > temp_max)
			{
				temp_max = grid[row][col];
				view++;
			}
			row++;
		}
		if (edges[col] != view)
			return (0);
		view = 0;
		temp_max = 0;
		row = 3;
		// lower edge of curent column
		while (row >= 0)
		{
			if (grid[row][col] > temp_max)
			{
				temp_max = grid[row][col];
				view++;
			}
			row--;
		}
		if (edges[4 + col] != view)
			return (0);
		// moving to the next column
		col++;
	}
	return (1);
}

void	all_valid_ind(int **valid_ind, int *edges, int **all_possible)
{
	int	row;
	int	pos_curser;
	int	temp_col;

	row = 0;
	// row by row
	while (row < 4)
	{
		temp_col = 0;
		pos_curser = 0;
		// check all possible pattern
		while (pos_curser < 24)
		{
			if (view_row(all_possible[pos_curser],
					edges[8 + row], edges[12 + row]) == 1)
			{
				valid_ind[row][temp_col] = pos_curser;
				temp_col++;
			}
			pos_curser++;
		}
		// end the row with -1 as flag
		valid_ind[row][temp_col] = -1;
		// moving to the next row
		row++;
	}
}

void	copy_row(int *dest, int *src)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		dest[i] = src[i];
		i++;
	}
}

int	fill_grid(int **grid, int *edges, int **all_p, int **valid_ind, int row)
{
	int	col;
	// this variable used only to make the code more readable
	//always hold the value of chance_idx = valid_ind[row][col];
	int	chance_idx;

	// terminate case
	if (row == 4)
	{
		return (check_cols(grid, edges));
	}

	col = 0;
	while (valid_ind[row][col] != -1)
	{
		chance_idx = valid_ind[row][col];
		// copy the valid row to the grid
		copy_row(grid[row], all_p[chance_idx]);
		//check if any of the row cells has a duplicate value in it's column
		if (is_in_col(grid, row) == 0)
		{
			// if not, move to the next row
			if (fill_grid(grid, edges, all_p, valid_ind, row + 1) == 1)
				return (1);
		}
		col++;
	}
	return (0);
}

int	rush01(int **grid, int *edges)
{
	/*
	 those variable is used to move the pointers from the heap to the stack
	 all of this happened cuz we don't want to use malloc and free
	*/
	int	*all_possible[24];
	int	all_possible_data[24][4];
	int	*valid_ind[4];
	// 25 because of the flag -1
	int	valid_data[4][25];
	int	curser;

	curser = 0;
	/*
	 preper the all_possible_data by make the all_possible pointers point to the same addresses
	 when a change happened into all_possible it reflected into all_possible_data
	*/
	while (curser < 24)
	{
		all_possible[curser] = all_possible_data[curser];
		curser++;
	}
	curser = 0;
	while (curser < 4)
	{
		valid_ind[curser] = valid_data[curser];
		curser++;
	}
	//filling _all_possible_data with the 24 (4! (dimension!)) possible pattern
	fill_all_possible(all_possible);
	// filling valid_data by make changes into valid_ind
	all_valid_ind(valid_ind, edges, all_possible);
	if (fill_grid(grid, edges, all_possible, valid_ind, 0) == 1)
	{
		print_grid(grid);
	}
	write (1, "Error\n",6);
}
