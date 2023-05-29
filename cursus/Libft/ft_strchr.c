/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:53:56 by jechever          #+#    #+#             */
/*   Updated: 2023/05/29 17:27:54 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	if (x >= 0 && x <= 255)
	{
		while (*str != x)
		{
			if (*str == '\0')
				return (0);
			str++;
		}
	}
	return ((char *)str);
}
