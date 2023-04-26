/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:59:13 by jechever          #+#    #+#             */
/*   Updated: 2023/03/27 20:42:12 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	reverse[10];

	i = 0;
	n = size - 1;
	while (n >= 0)
	{
		reverse[i] = tab[n];
		i++;
		n--;
	}
	tab = reverse;
}

/* void	ft_putstr(int *tab, int size)
{
	int	n;

	n = 0;
	while (n < size)
	{
		printf("%i\n", tab[n]);
		n++;
	}
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	len = sizeof tab / sizeof tab[0];

	ft_putstr(tab, len);
	ft_rev_int_tab(tab, len);
	ft_putstr(tab, len);
} */
