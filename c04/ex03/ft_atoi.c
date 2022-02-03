/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:23:24 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/26 15:04:46 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
int ft_atoi(char *str);

int main()
{
	printf("%d", ft_atoi("  a-++489ajs23"));
}*/

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13)
		|| str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
				neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0' ) + (result * 10);
		i++;
	}
	return (neg * result);
}	
