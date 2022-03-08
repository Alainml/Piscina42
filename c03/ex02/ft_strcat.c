/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:55:30 by almirand          #+#    #+#             */
/*   Updated: 2022/03/02 09:09:27 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcat(char	*dest, char *src);

int	main(void)
{
	char	src[] = "This is source";
	char	dest[] = "This is destination";

	ft_strcat(dest, src);
	printf("%s", dest);
}*/

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

/* FT_STRCAT(char	*dest, char *src)
**
** Appends a copy of src at the end of dest, terminating on nul.
** Returns Dest, should have enough space to hold the result.
*/
char	*ft_strcat(char	*dest, char *src)
{
	int	size_dest;
	int	counter;

	size_dest = ft_strlen(dest);
	counter = 0;
	while (src[counter])
	{
		dest[size_dest] = src[counter];
		size_dest++;
		counter++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
