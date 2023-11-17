/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:32:59 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/17 09:28:24 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	charac;

	charac = c;
	str = (char *)s;
	i = 0;

	while (str[i])
	{
		if (str[i] == charac)
			return (str + i);
		i++;
	}
	if (str[i] == charac)
		return (str + i);
	return (0);
}
