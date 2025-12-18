/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:47:54 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/17 12:50:59 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (!little[0])
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (big[i] && (i + little_len - 1) < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
		{
			if (j == little_len - 1)
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (0);
}
