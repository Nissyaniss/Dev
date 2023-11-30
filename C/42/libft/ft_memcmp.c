/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:47:49 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/30 10:44:23 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	int				i;
	unsigned char	*str1_ptr;
	unsigned char	*str2_ptr;

	str1_ptr = s1;
	str2_ptr = s2;
	i = 0;

	if (n == 0)
		return (0);

	while (i < n)
	{
		if (str1_ptr[i] != str2_ptr[i])
			return (str1_ptr[i] - str2_ptr[i]);
		i++;
	}
	i--;
	return (str1_ptr[i] - str2_ptr[i]);
}
