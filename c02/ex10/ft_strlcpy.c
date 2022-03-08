/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:39:21 by almirand          #+#    #+#             */
/*   Updated: 2022/03/03 11:54:23 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[9] = "String 1";
	char	dest[10] = "array dos";
	unsigned int size = 5;
	unsigned int length;

	printf("%s\n", dest);
	length = ft_strlcpy(dest, src, size);
	printf("%s, length src: %d", dest, length);
	return (0);
} */

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = ft_strlen(src);
	return (i);
}
