/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:03:38 by jechever          #+#    #+#             */
/*   Updated: 2023/05/19 16:03:38 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char str)
{
	if (str >= 65 && str <= 90)
		str += 32;
	return (str);
}