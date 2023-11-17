/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nissya <kirito042004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:41:58 by Nissya            #+#    #+#             */
/*   Updated: 2023/11/14 11:08:32 by Nissya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *dest, int n)
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
