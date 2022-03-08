/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:55:30 by almirand          #+#    #+#             */
/*   Updated: 2022/03/02 09:09:20 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strncat(char	*dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[] = "world";
	char	dest[] = "hello";
	unsigned int nb = 10;

	ft_strncat(dest, src, nb);
	printf("%s", dest);
} */

/* FT_STRLEN(char	*str)
**
** Returns the length of a string.
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* FT_STRCAT(char	*dest, char *src, unsigned int nb)
**
** Appends a copy of src at the end of dest until nb, terminating on nul.
** Returns Dest, should have enough space to hold the result.
*/
char	*ft_strncat(char	*dest, char *src, unsigned int nb)
{
	int				size_dest;
	unsigned int	counter;

	size_dest = ft_strlen(dest);
	counter = 0;
	while (counter < nb && src[counter])
	{
		dest[size_dest] = src[counter];
		size_dest++;
		counter++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
