/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:22:47 by caquinta          #+#    #+#             */
/*   Updated: 2022/03/01 15:55:52 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_coordinates(int *n, int *counter);
int		check_columns(char **solution, char *views);
/*
** Finds all posible solutions by line, and checks each by column vistas.
*/

void	combi(void)
{
	int		x;
	int		i;
	int		j;
	int		k;
	int		l;
	int		solutions;
	char	views[16];
	char	datainput[24][7];
	char	**matrix;

	views[16] = {'4', '3', '2', '1', '1', '2', '2', '2', '4', '3', '2', '1',
		'1', '2', '2', '2'};
	datainput[24][7] = {"411234", "321243", "311324", "321342", "221423",
		"231432", "312134", "222143", "312314", "322341", "222413", "232431",
		"213124", "223142", "213214", "223241", "223412", "233421", "124123",
		"134132", "124213", "134231", "134312", "144321"};
	x = 0;
	solutions = 0;
	while (x < 24)
	{
		if (views[8] == datainput[x][0] && views[12] == datainput[x][1])
		{
			i = 0;
			while (i < 24)
			{
				if (views[9] == datainput[i][0] && views[13] == datainput[i][1])
				{
					j = 0;
					while (j < 24)
					{
						if (views[10] == datainput[j][0] && views[14] == datainput[j][1])
						{
							k = 0;
							while (k < 24)
							{
								if (views[11] == datainput[k][0] && views[15] == datainput[k][1])
								{
									while (l < 6)
									{
										l = 0;
										matrix[0][l] = datainput[x][l];
										matrix[1][l] = datainput[i][l];
										matrix[2][l] = datainput[j][l];
										matrix[3][l] = datainput[k][l];
									}
									solutions = check_columns(matrix, views);
									if (solutions == 1)
									{
										printf("%s", matrix[x]);
										printf("%s", matrix[i]);
										printf("%s", matrix[j]);
										printf("%s", matrix[k]);
										return ;
									}
								}
								k++;
							}
						}
						j++;
					}
				}
				i++;
			}
		}
		x++;
	}
}
