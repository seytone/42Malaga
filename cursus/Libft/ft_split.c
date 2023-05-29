/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:57:24 by jechever          #+#    #+#             */
/*   Updated: 2023/05/29 18:18:07 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			words++;
		i++;
	}
	return (words + 1);
}

static void	*ft_clear(char **data)
{
	free(data);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	start;
	int		words;
	char	**matrix;

	if (!s)
		return (0);
	matrix = (char **) malloc (sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!matrix)
		return (ft_clear(matrix));
	i = 0;
	words = 0;
	while (s[i] && words < ft_count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start != i)
			matrix[words++] = ft_substr(s, start, (i - start));
	}
	matrix[words] = 0;
	return (matrix);
}
