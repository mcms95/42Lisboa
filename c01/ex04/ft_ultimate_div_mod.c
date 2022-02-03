/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:24:50 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/19 17:48:41 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	divisao;
	int	modulus;

	if (*b != 0)
	{	
	divisao = (*a) / (*b);
	modulus = (*a) % (*b);
	*a = divisao;
	*b = modulus;
	}
}
