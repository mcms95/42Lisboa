/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:15:56 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/25 13:41:56 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "era um vez escondido na selva um albino chines";
	char str2[] = "selva";
	printf("%s", ft_strstr(str, str2));
}*/

char	*ft_strstr( char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
