/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:23:19 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/30 10:48:36 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

//BOOL
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);

//STR
void			ft_bzero(void *dest, size_t n);
char			*ft_strchr(const char *s, int c);
int				ft_strlcat(char *dest, char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, size_t size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strrchr(const char *s, int c);

//CHAR
int				ft_tolower(int c);
int				ft_toupper(int c);

//MEM
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(void *s1, void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *dest, int c, size_t n);

#endif