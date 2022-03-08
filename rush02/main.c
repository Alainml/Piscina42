/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:16:16 by mmurgia-          #+#    #+#             */
/*   Updated: 2022/03/07 12:23:37 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	print_number(char *dict, char *input);
void	ft_read_numbers(int fd, char *dict);
char	*ft_strcpy(char *dest, char *src);
char	*power(int n_zeros, char *dict);
void	decompose_number(char *input, char *dict);

/* OPEN NUMBERS
** Opens the given file to be printed later.
*/
void	ft_open_numbers(char *input)
{
	int		fd;
	char	*dict;

	dict = malloc(1000);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		write(1, "Dict Error \n", 12);
	else
		ft_read_numbers(fd, dict);
	decompose_number(input, dict);
	free(dict);
}

/* FT_READ_NUMBERS
** Read the numbers from the file
*/
void	ft_read_numbers(int fd, char *dict)
{
	char	data[1000];
	long	num_bytes;

	num_bytes = read(fd, data, 1000);
	close(fd);
	if (num_bytes == 0)
	{
		write(1, "Archivo vacío \n", 15);
	}
	else
	{
		ft_strcpy(dict, data);
	}
}

/* MAIN
** Starts the programme
*/
int	main(int ac, char **av)
{
	if (ac == 2)
		ft_open_numbers(av[1]);
	if (ac == 3)
		ft_open_numbers(av[2]);
	return (0);
}

/* FT_STRCPY
** Copies an array into another
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
