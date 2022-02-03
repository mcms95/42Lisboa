/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:50:19 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/31 19:47:14 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	res;
	int	*matriz;

	i = 0;
	res = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	matriz = (int *)malloc(res * (sizeof(int)));
	if (!matriz)
	{
		*range = 0;
		return (-1);
	}
	*range = matriz;
	while (i < res)
	{
		matriz[i] = min + i;
		i++;
	}
	return (res);
}

/*int main()
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
