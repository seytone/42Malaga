/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:27:39 by jechever          #+#    #+#             */
/*   Updated: 2023/04/29 11:39:40 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(char str)
{
	if ((str > 64 && str < 91) || (str > 96 && str < 123))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%i", ft_isalpha('X'));
	printf("\n%i", isalpha('X'));
}
