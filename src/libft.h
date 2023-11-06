/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:25 by abouyata          #+#    #+#             */
/*   Updated: 2023/11/07 00:31:58 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//libft
#include <stdlib.h>
#include <string.h>

#ifndef LIBFT_H
#define LIBFT_H

int				ft_atoi(const char *str);
void			ft_bzero(void *s, unsigned int n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int n);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
void			*ft_memmove(void *dst, const void *src, unsigned int len);
void			*ft_memset(void *b, int c, unsigned int len);
char			*ft_strchr(char *s, int c);
int				ft_strlen(char *str);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned int len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strnstr(const char *big, const char *little,
					unsigned int len);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int destsize);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int destsize);
char			*ft_strtrim(char const *s1, char const *set);
#endif //LIBFT_H
