/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:39:07 by jechever          #+#    #+#             */
/*   Updated: 2023/04/20 11:43:17 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	int	n;
	int	non_ascii;

	n = 0;
	non_ascii = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 0 || str[n] > 126)
			non_ascii++;
		n++;
	}
	if (non_ascii == 0 || n == 0)
		return (1);
	else
		return (0);
}