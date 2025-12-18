/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:25:00 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/16 15:54:13 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	if (!dst && !src)
		return (0);
	dst_len = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size < dst_len)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (ft_strlen(src) + dst_len);
}
/*
int	main(void)
{
	char	dest[30];
	char	*src = (char *)"AAAAAAAAA";

	dest[0] = 'B';

	return (0);
}
*/
