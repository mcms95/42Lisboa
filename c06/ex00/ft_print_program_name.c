/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:36:54 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/27 19:08:34 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_putchar(argv[0]);
	write(1, "\n", 1);
}
