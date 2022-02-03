/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:20:38 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/31 19:57:00 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy( char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_tamanho_final(char **strings, int size, int sep_size)
{
	int	tamanho_final;
	int	i;

	tamanho_final = 0;
	i = 0;
	while (i < size)
	{
		tamanho_final += ft_strlen(strings[i]);
		tamanho_final += sep_size;
		i++;
	}
	tamanho_final -= sep_size;
	return (tamanho_final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*d;
	char	*string;
	int		tamanho_final;
	int		i;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	tamanho_final = ft_tamanho_final(strs, size, ft_strlen(sep));
	string = (char *)malloc((tamanho_final + 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		i++;
	}
	*d = '\0';
	return (string);
}

/*int	main(void)
{
	int		i;
	char	**strs;
	char	*sep;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Marcelo";
	strs[1] = "Rebelo";
	strs[2] = "de Sousa";
	sep = " ";
	result = ft_strjoin(size, strs, sep);
	printf("%s$\n", result);
	free(result);
}*/
