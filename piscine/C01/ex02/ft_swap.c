/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:47:53 by jechever          #+#    #+#             */
/*   Updated: 2023/03/24 12:32:19 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 9;
	printf("%d %d", x, y);
	ft_swap(&x, &y);
	printf("\n%d %d", x, y);
} */
