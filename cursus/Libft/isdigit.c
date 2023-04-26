/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:29:40 by jechever          #+#    #+#             */
/*   Updated: 2023/04/20 10:30:29 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	int	n;
	int	non_digit;

	n = 0;
	non_digit = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 48 || str[n] > 57)
			non_digit++;
		n++;
	}
	if (non_digit == 0 || n == 0)
		return (1);
	else
		return (0);
}
