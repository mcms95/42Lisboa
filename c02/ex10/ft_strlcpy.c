/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:52 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/25 10:17:09 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>
unsigned int ft_strlcpy(char*dest,char*src,unsigned int size);
int main()
{
	char a[] = "nuno";
	char b[] = "alberto";	
	printf("%lu | %s\n", strlcpy( a, b, 4), a);
	printf("%u | %s", ft_strlcpy(a, b, 4 ), a);

}*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
	{
		count ++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
