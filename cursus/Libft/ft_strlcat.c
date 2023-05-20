/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:02:17 by jechever          #+#    #+#             */
/*   Updated: 2023/05/20 10:02:17 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlcat(char *dest, char *src, int n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < n)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (0);
}
