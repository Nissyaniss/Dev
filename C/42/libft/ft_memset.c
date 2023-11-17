/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:16:55 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/14 11:07:07 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int ch, int n)
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
