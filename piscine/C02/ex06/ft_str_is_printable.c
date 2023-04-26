/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:52:36 by jechever          #+#    #+#             */
/*   Updated: 2023/03/28 13:38:51 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
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

/* int	main(void)
{
	char    src[] = "!A_á";

	printf("%i", ft_str_is_printable(src));
} */
