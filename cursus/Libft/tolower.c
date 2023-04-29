/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:24:48 by jechever          #+#    #+#             */
/*   Updated: 2023/04/29 11:47:35 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

char	ft_tolower(char str)
{
	if (str >= 65 && str <= 90)
		str += 32;
	return (str);
}

int	main(void)
{
	printf("%i", ft_tolower('*'));
	printf("\n%i", tolower('*'));
}
