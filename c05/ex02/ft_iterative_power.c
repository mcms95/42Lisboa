/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:20:17 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/30 19:14:54 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_iterative_power(int nb,int power);

int main()
{
	printf("%d", ft_iterative_power(4,2));
}*/

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}
