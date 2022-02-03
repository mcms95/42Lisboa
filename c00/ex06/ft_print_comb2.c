/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:28:07 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/20 14:23:07 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdbool.h>

void	wrt(char c)
{
	write(1, &c, 1);
}

void	print(int z, int x, bool fix)
{
	wrt(48 + z / 10);
	wrt(48 + z % 10);
	wrt(' ');
	wrt(48 + x / 10);
	wrt(48 + x % 10);
	if (fix)
	{
		wrt(',');
		wrt(' ');
	}
}

void	ft_print_comb2(void)
{	
	int		a;
	int		b;
	bool	fix;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			fix = !(a == 98 && b == 99);
			print(a, b, fix);
			b++;
		}
	a++;
	}	
}
