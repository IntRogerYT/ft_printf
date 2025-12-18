/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:28:37 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/31 12:49:06 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f_iteri(unsigned int i, char *s)
{
	if (i % 2 == 0 && *s >= 'a' && *s <= 'z')
		*s -= 32;
}

void	ft_striteri(char *s, void (*f_iteri)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f_iteri(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
