/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:32:20 by jechever          #+#    #+#             */
/*   Updated: 2023/04/20 11:33:11 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	int	n;
	int	non_printable;

	n = 0;
	non_printable = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] > 126)
			non_printable++;
		n++;
	}
	if (non_printable == 0 || n == 0)
		return (1);
	else
		return (0);
}
