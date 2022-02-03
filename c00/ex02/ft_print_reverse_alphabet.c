/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:29:32 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/20 14:19:09 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 'z' ;
	while (letra >= 'a')
	{
		write(1, &letra, 1);
		letra--;
	}
}
