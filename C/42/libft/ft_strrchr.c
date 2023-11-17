/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:34:46 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/17 09:54:26 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	charac;
	int		len_s;

	charac = c;
	str = (char *)s;
	len_s = ft_strlen(str);
	i = len_s;

	while (i >= 0)
	{
		if (str[i] == charac)
			return (str + i);
		i--;
	}
	return (0);
}
