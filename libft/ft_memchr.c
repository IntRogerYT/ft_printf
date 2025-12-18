/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:32:08 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/10 12:49:46 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char const	*data;
	size_t				i;

	data = (unsigned char const *)s;
	i = 0;
	while (i < n)
	{
		if (data[i] == (unsigned char)c)
			return ((void *)(data + i));
		i++;
	}
	return (0);
}
