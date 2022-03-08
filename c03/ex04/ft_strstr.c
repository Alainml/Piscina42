/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:49:10 by almirand          #+#    #+#             */
/*   Updated: 2022/03/06 15:45:03 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strstr(char	*str, char	*to_find);

int	main(void)
{
	char str[] = "0: cero";
	char tofind[] = "0";

	printf("%s", ft_strstr(str, tofind));
	return (0);
} */

/* FT_STRSTR(char	*str, char	*to_find)
**
** Locates the first ocurrence of a null terminated str1 in str2
** Retuns the locator to the first coincidence found.
*/
char	*ft_strstr(char	*str, char	*to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
