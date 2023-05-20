/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:54:52 by jechever          #+#    #+#             */
/*   Updated: 2023/05/20 09:54:52 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strrchr(char *str, char c)
{
    int i;
    int last;

    i = 0;
    last = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            last = i;
        i++;
    }
    if (last != 0)
        return (last);
    else
        return (0);
}
