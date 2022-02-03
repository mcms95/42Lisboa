/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:21:54 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/27 14:05:59 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	print(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	m;

	m = 0;
	while (s1[m] != 0 || s2[m] != 0)
	{
		if (s1[m] == s2[m])
		{
			m++;
		}
		if (s1[m] > s2[m] || s1[m] < s2[m])
		{
			return (s1[m] - s2[m]);
		}
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	z;

	z = 0;
	while (str[z] != 0)
	{	
		print(str[z]);
		z++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		j++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		print('\n');
		j++;
	}
}
