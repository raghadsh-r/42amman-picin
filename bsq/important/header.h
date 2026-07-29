/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 08:58:52 by ralshraw          #+#    #+#             */
/*   Updated: 2026/07/28 20:44:48 by mbadarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE	1024

int		count_row(char **argv, int r);
int		count_colum(char **argv, int r);
char	**fill_the_array(char **ptr, char **argv, int *rc, int r);
void	fill_nodes(int **map, char **map_s, int rows, char *chars_list);
int		min(int i1, int i2, int i3);
void	lrg_on_node(int *row, int *row_pre, char *row_s, char obstcl);
int		*lrg_in_map(int **map, int rows, int cols);
void	print(char **ptr, int row, int colum);
char	find_char(char *arg, int idx);
char	**make_array(int row, int colum);
void	solve_map(char **map, int rows, int cols, char *chars_list);
void	fill_map(char **map, int *lrg_sqr, char *chars_list);
int		ft_atoi(char *str);
int		validate_row_num(char *arg, int rows, int cols);
