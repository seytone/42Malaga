/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:41:05 by jechever          #+#    #+#             */
/*   Updated: 2023/03/28 14:47:40 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;
	int	non_upper;

	n = 0;
	non_upper = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 65 || str[n] > 90)
			non_upper++;
		n++;
	}
	if (non_upper == 0 || n == 0)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char    src[] = "AbC";

	printf("%i", ft_str_is_uppercase(src));
} */
