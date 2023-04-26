/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:31:09 by jechever          #+#    #+#             */
/*   Updated: 2023/04/20 11:16:34 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	int	n;
	int	non_alpha;

	n = 0;
	non_alpha = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 48 || str[n] > 122
			|| (str[n] > 57 && str[n] < 65)
			|| (str[n] > 90 && str[n] < 97))
			non_alpha++;
		n++;
	}
	if (non_alpha == 0 || n == 0)
		return (1);
	else
		return (0);
}
