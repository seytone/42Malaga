/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:22:38 by jechever          #+#    #+#             */
/*   Updated: 2023/04/29 11:56:11 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

char	ft_toupper(char str)
{
	if (str >= 97 && str <= 122)
		str -= 32;
	return (str);
}

int	main(void)
{
	printf("%s", ft_toupper('a'));
	printf("\n%s", toupper('a'));
}
