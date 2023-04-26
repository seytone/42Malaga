/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:02:49 by jechever          #+#    #+#             */
/*   Updated: 2023/03/24 12:13:46 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_elements(int pos1, int pos2, int pos3)
{
	write(1, &pos1, 1);
	write(1, &pos2, 1);
	write(1, &pos3, 1);
	if (pos1 != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	pos1;
	int	pos2;
	int	pos3;

	pos1 = '0';
	while (pos1 <= '7')
	{
		pos2 = pos1 + 1;
		while (pos2 <= '8')
		{
			pos3 = pos2 + 1;
			while (pos3 <= '9')
			{
				ft_print_elements(pos1, pos2, pos3);
				pos3++;
			}
			pos2++;
		}
		pos1++;
	}
}

int	main(void)
{
	ft_print_comb();
}
