/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:02:52 by jechever          #+#    #+#             */
/*   Updated: 2023/05/20 15:52:24 by jechever         ###   ########.fr       */
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
