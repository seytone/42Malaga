/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:31:31 by jechever          #+#    #+#             */
/*   Updated: 2023/03/28 15:13:37 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;
	int	non_lower;

	n = 0;
	non_lower = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 97 || str[n] > 122)
			non_lower++;
		n++;
	}
	if (non_lower == 0 || n == 0)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char    src[] = "aBc";

	printf("%i", ft_str_is_lowercase(src));
} */
