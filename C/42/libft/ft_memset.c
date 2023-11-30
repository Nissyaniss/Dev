/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:16:55 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/30 10:48:14 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = dest;
	i = 0;

	while (i < n)
	{
		ptr[i] = (unsigned char) ch;
		i++;
	}
	return (dest);
}
