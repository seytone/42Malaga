/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 23:09:27 by jechever          #+#    #+#             */
/*   Updated: 2023/03/30 12:43:19 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		n;
	char	prev;

	n = 0;
	while (str[n] != '\0')
	{
		if (n > 0)
			prev = str[n - 1];
		if (str[n] > 64 && str[n] < 91)
			str[n] += 32;
		if (str[n] > 96 && str[n] < 123)
			if (n == 0
				|| (!(prev > 47 && prev < 58)
					&& !(prev > 64 && prev < 91)
					&& !(prev > 96 && prev < 123)))
					str[n] -= 32;
		n++;
	}
	return (str);
}

/* int	main(void)
{
	char	src[] = "salut, µm>ent tu vas ? 42mots quar,ante-deux; cinqu/ante+et+un";

	printf("%s", ft_strcapitalize(src));
} */
