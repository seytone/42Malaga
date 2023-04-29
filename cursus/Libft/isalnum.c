/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:31:09 by jechever          #+#    #+#             */
/*   Updated: 2023/04/29 11:45:48 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(char str)
{
	if ((str > 47 && str < 58)
		|| (str > 64 && str < 91)
		|| (str > 96 && str < 123))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%i", ft_isalnum('*'));
	printf("\n%i", isalnum('*'));
}
