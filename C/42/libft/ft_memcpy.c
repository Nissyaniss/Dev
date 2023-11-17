/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:46:33 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/13 19:12:17 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	const unsigned char	*src_ptr;
	int					i;
	unsigned char		*dest_ptr;

	src_ptr = src;
	dest_ptr = dest;
	i = 0;

	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}

	return (dest);
}
