/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:10:32 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/25 13:40:48 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);

int main()
{
	char a[100] = "Helloooooooo";
	char b[100] = "Helloooooooo";
	
	printf("%d\n", strcmp(a, b));
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp("Joao", "hello"));
	printf("%d\n", ft_strcmp("Joao", "hello"));
	printf("%d\n", strcmp("bezta", "heroi243"));
	printf("%d\n", ft_strcmp("bezta", "heroi243"));
	printf("%d\n", strcmp("kill ssso", "kill Nisns"));
	printf("%d\n", ft_strcmp("kill ssso", "kil Nisns"));
}*/

int	ft_strcmp(char *s1, char *s2)
{	
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
