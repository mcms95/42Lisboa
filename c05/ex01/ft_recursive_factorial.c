/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:37:50 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/29 18:27:35 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_recursive_factorial(int nb);

int main(void)
{
	printf("%d", ft_recursive_factorial(4));
}*/

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (0);
}
