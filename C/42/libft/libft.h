/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:23:19 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/16 08:58:06 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

//IS
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);

//STR
void			ft_bzero(void *dest, int n);
char			*ft_strchr(const char *s, int c);
int				ft_strlcat(char *dest, const char *src, int size);
unsigned int	ft_strlcpy(char *dest, char *src, int size);
int				ft_strlen(char *str);
char			*ft_strrchr(const char *s, int c);

//CHAR
int				ft_tolower(int c);
int				ft_toupper(int c);

//MEM
void			*ft_memchr(const void *s, int c, int n);
int				ft_memcmp(void *s1, void *s2, int n);
void			*ft_memcpy(void *dest, const void *src, int n);
void			*ft_memmove(void *dest, const void *src, int n);
void			*ft_memset(void *dest, int c, int n);

#endif