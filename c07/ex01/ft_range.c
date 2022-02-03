/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:37:05 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/31 19:44:14 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*matriz;

	i = 0;
	range = max - min;
	if (min >= max)
	{
		return (0);
	}
	matriz = (int *)malloc(range * (sizeof(int)));
	if (!matriz)
		return (0);
	while (i < range)
	{
		matriz[i] = min + i;
		i++;
	}
	return (matriz);
}

/*int main()
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
