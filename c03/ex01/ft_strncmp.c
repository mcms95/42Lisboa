/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:11:04 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/25 13:39:08 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("%d", ft_strncmp("jones", "si", 4));
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
