/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:59:25 by jechever          #+#    #+#             */
/*   Updated: 2023/05/20 11:59:25 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_itoa(int n)
{
    char *str;
    int i;
    int sign;

    i = 0;
    sign = 1;
    if (n < 0)
    {
        sign = -1;
        i++;
    }
    while (n / 10 != 0)
    {
        n = n / 10;
        i++;
    }
    str = malloc(sizeof(char) * (i + 1));
    if (!str)
        return (0);
    str[i + 1] = '\0';
    while (i >= 0)
    {
        str[i] = (n % 10) * sign + '0';
        n = n / 10;
        i--;
    }
    return (str);
}
