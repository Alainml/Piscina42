/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:03:00 by almirand          #+#    #+#             */
/*   Updated: 2022/03/03 09:24:25 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char first[] = "This is ";
	char last[] = "a potentially long string";
	int r;
	int size = 9;
	char buffer[size];

	strcpy(buffer, first);
	r = ft_strlcat(buffer, last, size);

	puts(buffer);
	printf("Value returned: %d\n", r);
	if( r > size)
		puts("String truncated");
	else
		puts("String was fully copied");
	return (0);
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

/* FT_STRLCAT(char	*dest, char *src, unsigned int size)
**
** Appends a copy of src at the end of dest until size-lDest-1 terminating on nul
** Returns the sum size of src + dest.
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_dest;
	unsigned int	length_src;

	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	i = 0;
	if (size < 1 || size <= length_dest)
		return (length_src + size);
	while (src[i] && (i < (size - length_dest - 1)))
	{
		dest[i + length_dest] = src[i];
		i++;
	}
	dest[i + length_dest] = '\0';
	return (length_src + length_dest);
}
