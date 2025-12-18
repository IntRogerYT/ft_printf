/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:25:16 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/11/10 09:59:39 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc(nmemb * size);
	if (!mem)
		return (0);
	i = -1;
	while (++i < size * nmemb)
		mem[i] = 0;
	return (mem);
}
