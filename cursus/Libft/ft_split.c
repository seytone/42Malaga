/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:57:24 by jechever          #+#    #+#             */
/*   Updated: 2023/05/24 11:33:43 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_aux(char const *s, char c, int i, char **str)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			str[k] = malloc(sizeof(char) * (j + 1));
			if (!str[k])
				return (0);
			ft_memcpy(str[k], &s[i], j);
			str[k][j] = '\0';
			k++;
			i = i + j;
			j = 0;
		}
	}
	str[k] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	str = ft_aux(s, c, i, str);
	return (str);
}
