/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:37:45 by jechever          #+#    #+#             */
/*   Updated: 2023/03/29 15:09:42 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;
	int	res;

	n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			res = s1[n] - s2[n];
			return (res);
		}
		n++;
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "Hola";
	char	s2[] = "Xola";

	printf("%i", ft_strcmp(s1, s2));
	printf("\n%i", strcmp(s1, s2));
} */
