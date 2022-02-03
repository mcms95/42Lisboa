/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:28:07 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/20 14:19:55 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	simba( char q, char w, char e)
{	
	write(1, &q, 1);
	write(1, &w, 1);
	write(1, &e, 1);
	write(1, ", ", 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				simba(a, b, c);
				c++;
			}
		b++;
		}
	a++;
	}
}
