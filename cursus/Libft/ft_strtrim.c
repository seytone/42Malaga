/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:56:48 by jechever          #+#    #+#             */
/*   Updated: 2023/05/24 12:33:16 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_aux(int i, int j)
{
	char	*aux;

	aux = malloc(sizeof(char) * (j - i + 2));
	if (!aux)
		return (0);
	return (aux);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] != '\0' && ft_memchr(set, s1[i], ft_strlen(set)))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_memchr(set, s1[j], ft_strlen(set)))
		j--;
	str = ft_aux(i, j);
	while (i <= j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
