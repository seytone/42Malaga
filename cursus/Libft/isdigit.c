/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:29:40 by jechever          #+#    #+#             */
/*   Updated: 2023/04/29 11:39:16 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(char str)
{
	if (str > 47 && str < 58)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%i", ft_isdigit('X'));
	printf("\n%i", isdigit('X'));
}
