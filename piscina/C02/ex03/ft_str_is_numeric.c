/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 21:46:02 by jechever          #+#    #+#             */
/*   Updated: 2023/03/28 15:12:11 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;
	int	non_digit;

	n = 0;
	non_digit = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 48 || str[n] > 57)
			non_digit++;
		n++;
	}
	if (non_digit == 0 || n == 0)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char    src[] = "123";

	printf("%i", ft_str_is_numeric(src));
} */
