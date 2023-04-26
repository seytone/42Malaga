/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:27:39 by jechever          #+#    #+#             */
/*   Updated: 2023/04/20 10:38:24 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	n;
	int	non_alpha;

	n = 0;
	non_alpha = 0;
	while (str[n] != '\0')
	{
		if ((str[n] > 90 && str[n] < 97) || str[n] < 65 || str[n] > 122)
			non_alpha++;
		n++;
	}
	if (non_alpha == 0 || n == 0)
		return (1);
	else
		return (0);
}
