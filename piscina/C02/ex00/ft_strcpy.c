/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 09:01:33 by jechever          #+#    #+#             */
/*   Updated: 2023/03/29 14:26:20 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/* void	ft_print_array(char *arr)
{
	int	n;

	n = 0;
	while (arr[n] != '\0')
	{
		printf("%c", (arr[n]));
		n++;
	}
	printf("\n");
}

int	main(void)
{
	char	src[] = "Lorem Ipsum";
	char	dest[] = "";

	ft_print_array(src);
	ft_strcpy(dest, src);
	ft_print_array(dest);
} */
