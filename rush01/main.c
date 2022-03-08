/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilopez- <dilopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:43:24 by almirand          #+#    #+#             */
/*   Updated: 2022/02/27 19:27:35 by dilopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	combi(void);
/*
** Returns the left vista for line, or upper for column.
*/

int	ft_generate_left(int *n)
{
	int	i;
	int	left;
	int	max_left;

	i = -1;
	max_left = 0;
	left = 0;
	while (i++ < 4)
	{
		if (max_left < n[i])
		{
			max_left = n[i];
			left++;
		}
	}
	return (left);
}

/*
** Returns the right vista for line, or lower for column.
*/

int	ft_generate_right(int *n)
{
	int	i;
	int	right;
	int	max_right;

	i = 4;
	max_right = 0;
	right = 0;
	while (i-- > 0)
	{
		if (max_right < n[i])
		{
			max_right = n[i];
			right++;
		}
	}
	return (right);
}

/*
** Takes a posible solution by line and checks by columns.
** Return: 0 means not viable, 1 means final solution found.
*/
int	check_columns(char **solution, char *views)
{
	int	col[4];
	int	i;
	int	up;
	int	down;

	i = 0;
	while (i < 4)
	{
		col[0] = solution[0][i + 2];
		col[1] = solution[1][i + 2];
		col[2] = solution[2][i + 2];
		col[3] = solution[3][i + 2];
		up = ft_generate_left(col);
		down = ft_generate_right(col);
		if (up != views[i] || down != views[i + 4])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
** Takes the input array and returns it without spaces.
*/
char	*make_viewlist(char *input)
{
	char	*views;
	int		i;
	int		j;

	views = malloc(16);
	i = 0;
	j = 0;
	while (input[i])
	{
		if (input[i] != ' ')
		{
			views[j] = input[i];
			j++;
		}
		i++;
	}
	return (views);
}

/*
** Main method, manages the whole program.
*/
int	main(int ac, char **av)
{
	char	*views;

	combi();
	if (ac == 2)
	{
		views = make_viewlist(av[1]);
	}
}
