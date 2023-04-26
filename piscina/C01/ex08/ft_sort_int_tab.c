/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:20:05 by jechever          #+#    #+#             */
/*   Updated: 2023/03/24 13:38:54 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

/* void	ft_print_array(int *tab, int size)
{
	int	n;
	int	len = sizeof tab / sizeof tab[0];

	n = 0;
	while (n <= len)
	{
		printf("%i", tab[n]);
		n++;
	}
	printf("\n");
} */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i - 1;
		while (j < size - 1)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		ft_swap(&tab[min], &tab[i]);
		i++;
	}
}

/* int	main(void)
{
	int	arr[] = {3, 1, 5, 9, 4, 2};
	int	len = sizeof arr / sizeof arr[0];

	ft_print_array(arr, len);

	ft_sort_int_tab(arr, len);

	ft_print_array(arr, len);
} */
