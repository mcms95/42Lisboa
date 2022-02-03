/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:30:16 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/30 19:21:43 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_recursive_power(int nb,int power);

int main()
{
	printf("%d", ft_recursive_power(4,2));
}*/

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power > 0)
	{
		res *= nb * ft_recursive_power(nb, (power - 1));
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (res);
}
