/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:17:07 by jechever          #+#    #+#             */
/*   Updated: 2023/03/17 12:36:19 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	pos1;
	int	pos2;

	pos1 = 0;
	while (pos1 <= 98)
	{
		pos2 = pos1 + 1;
		while (pos2 <= 99)
		{
			ft_print_char(pos1 / 10 + '0');
			ft_print_char(pos1 % 10 + '0');
			ft_print_char(' ');
			ft_print_char(pos2 / 10 + '0');
			ft_print_char(pos2 % 10 + '0');
			if (pos1 != 98)
				write(1, ", ", 2);
			pos2++;
		}
	pos1++;
	}
}
