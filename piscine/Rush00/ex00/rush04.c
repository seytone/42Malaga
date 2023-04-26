/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:49:52 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/12 21:44:06 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_choose_char(int x, int y, int f, int c)
{
	if ((f == 1 && c == 1) || (f == x && c == y))
		ft_putchar('A');
	else if ((f == 1 && c == y) || (f == x && c == 1))
		ft_putchar('C');
	else if ((f == 1 || f == x) || (c == 1 || c == y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	f;
	int	c;

	f = 1;
	if (y < 1)
		return ;
	while (f <= x)
	{
		c = 1;
		while (c <= y)
		{
			ft_choose_char(x, y, f, c);
			c++;
		}
		f++;
		ft_putchar('\n');
	}
}
