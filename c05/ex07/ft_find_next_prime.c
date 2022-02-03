/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:40:48 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/31 20:35:28 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find(int nb)
{
	int	a;
	int	x;

	a = 1;
	x = 2;
	if (nb < 2)
		return (0);
	while (nb % x != 0 && x < ((nb / x) + (nb % x)))
		x++;
	if (nb % x == 0 && nb != 2)
		return (0);
	else
		return (nb);
}

int	ft_find_next_prime(int nb)
{
	while (ft_find(nb) == 0)
	{
		nb += 1;
		ft_find(nb);
	}
	return (ft_find(nb));
}

/*int main()
{
	printf("%d", ft_find_next_prime(11));

}*/
