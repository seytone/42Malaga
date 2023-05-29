/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:50:50 by jechever          #+#    #+#             */
/*   Updated: 2023/05/29 18:43:38 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (ft_strlen(s) < (int)start)
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < (int)len)
		len = ft_strlen(&s[start]);
	i = 0;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (i < len && s[i + start])
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
