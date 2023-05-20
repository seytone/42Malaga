/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:07:14 by jechever          #+#    #+#             */
/*   Updated: 2023/05/20 12:07:14 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *str, void (*f)(unsigned int, char *))
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        f(i, &str[i]);
        i++;
    }
}
