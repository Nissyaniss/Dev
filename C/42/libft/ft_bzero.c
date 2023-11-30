/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:41:58 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/30 10:33:14 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	int				i;
	unsigned char	*ptr;

	ptr = dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}