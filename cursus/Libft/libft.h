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

// STRUCTURE
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// FUNCTIONS
int	ft_isalpha(char str);
int	ft_isdigit(char str);
int	ft_isalnum(char str);
int	ft_isascii(char str);
int	ft_isprint(char str);
int	ft_strlen(char *str);
int ft_strchr(char *str, char c);
int ft_strrchr(char *str, char c);
int ft_strncmp(char *str1, char *str2, int n);
int ft_strlcpy(char *dest, char *src, int n);
int ft_strlcat(char *dest, char *src, int n);
int ft_bzero(char *str, int n);
int	ft_memset(char *str, int c, int n);
int	ft_memcpy(char *dest, char *src, int n);
int	ft_memmove(char *dest, char *src, i);
int	ft_memchr(char *str, char c, int n);
int	ft_memcmp(char *str1, char *str2, int n);
int	ft_toupper(char str);
int	ft_tolower(char str);
int	ft_atoi(char *str);
int	ft_calloc(int count, int size);
int ft_strdup(char *str);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

// BONUS FUNCTIONS
int ft_lstsize(t_list *lst);
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstnew(void *content);
t_list *ft_lstlast(t_list *lst);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif