/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:54:29 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/16 15:03:56 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_data;
	unsigned char	*s2_data;

	if (n == 0)
		return (0);
	s1_data = (unsigned char *)s1;
	s2_data = (unsigned char *)s2;
	while (n > 0)
	{
		if (*s1_data != *s2_data)
			return (*s1_data - *s2_data);
		n--;
		s1_data++;
		s2_data++;
	}
	return (0);
}
