/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:57:24 by jechever          #+#    #+#             */
/*   Updated: 2023/05/20 11:57:24 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    char **str;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    if (!s)
        return (0);
    str = malloc(sizeof(char *) * (ft_strlen(s) + 1));
    if (!str)
        return (0);
    while (s[i] != '\0')
    {
        if (s[i] == c)
            i++;
        else
        {
            while (s[i + j] != c && s[i + j] != '\0')
                j++;
            str[k] = malloc(sizeof(char) * (j + 1));
            if (!str[k])
                return (0);
            ft_memcpy(str[k], &s[i], j);
            str[k][j] = '\0';
            k++;
            i = i + j;
            j = 0;
        }
    }
    str[k] = 0;
    return (str);
}
