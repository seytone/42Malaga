/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:01:00 by jechever          #+#    #+#             */
/*   Updated: 2023/05/20 15:49:42 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strnstr(char *str, char *to_find, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && i + j < n)
			{
				if (to_find[j + 1] == '\0')
					return (1);
				j++;
			}
		}
		i++;
	}
	return (0);
}
