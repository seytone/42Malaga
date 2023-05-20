/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:56:04 by jechever          #+#    #+#             */
/*   Updated: 2023/05/20 09:56:04 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memchr(char *str, char c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
