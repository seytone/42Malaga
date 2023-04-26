/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:11:01 by jechever          #+#    #+#             */
/*   Updated: 2023/03/29 15:23:12 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				res;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < (n - 1))
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "";
	char	s2[] = "LoremIpsum";

	printf("%i", ft_strncmp(s1, s2, 8));
	printf("\n%i", strncmp(s1, s2, 8));
} */
