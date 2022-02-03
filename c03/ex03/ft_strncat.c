/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:11:57 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/25 13:41:23 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char *ft_strncat( char *dest, char *src, unsigned int nb);

int main ()
{
	char src[100] = "hellwedwdqwdqwdo";
	char dest[100] = "ifull";
	printf("%s", ft_strncat(dest, src, 3));
}*/

char	*ft_strncat( char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
