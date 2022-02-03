/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:31:09 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/30 19:25:00 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int ft_iterative_factorial(int nb);

int main()
{
	printf("%d", ft_iterative_factorial(0));
	printf("\n");
	printf("%d", ft_iterative_factorial(5));
	printf("\n");
	printf("%d", ft_iterative_factorial(4));
	printf("\n");
	printf("%d", ft_iterative_factorial(-1));
	printf("\n");
	printf("%d", ft_iterative_factorial(12));
	printf("\n");
	printf("%d", ft_iterative_factorial(1));

}*/

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb >= 0)
	{	
		while (nb > 0)
		{
		fact = fact * nb;
		nb--;
		}
		return (fact);
	}
	else
		return (0);
}
