/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechever <jechever@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:04:28 by jechever          #+#    #+#             */
/*   Updated: 2023/04/29 13:22:49 by jechever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

// DEPENDECIES

#include <stdlib.h>
#include <unistd.h>

// STRUCTURE

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_isalpha(char str);
int	ft_isdigit(char str);
int	ft_isalnum(char str);

#endif