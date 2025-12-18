/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:18:31 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/16 15:52:54 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_data;
	unsigned char	*src_data;

	dest_data = (unsigned char *)dest;
	src_data = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	while (i < n)
	{
		dest_data[i] = src_data[i];
		i++;
	}
	return (dest);
}
