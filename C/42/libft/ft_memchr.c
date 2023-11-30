/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:38:50 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/30 10:42:51 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str_ptr;
	unsigned char	c_dup;

	i = 0;
	str_ptr = s;
	c_dup = c;

	while (i < n)
	{
		if (str_ptr[i] == c_dup)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
