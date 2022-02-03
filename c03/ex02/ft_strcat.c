/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:11:34 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/25 13:40:04 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char *ft_strcat( char *dest, char *src);

int main()
{
	char src[100] = "hellwedwdqwdqwdo";
	char dest[100] = "ifull";
	printf("%s", ft_strcat(dest, src));	
}*/

char	*ft_strcat( char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
