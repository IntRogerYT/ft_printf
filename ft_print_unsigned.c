/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:17:10 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/18 12:18:16 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_nbrlen(unsigned int nbr)
{
	unsigned int	len;

	if (!nbr)
		return (0);
	len = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int num)
{
	char			*str;
	unsigned long	nbr;
	unsigned int	len;

	nbr = num;
	len = ft_nbrlen(nbr);
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}

int	ft_print_unsigned_int(unsigned int num)
{
	char	*str;
	int		str_len;

	if (num < 0)
	{
		num *= -1;
		return (UINT_MAX - num);
	}
	str = ft_utoa(num);
	if (!str)
		return (-1);
	str_len = ft_print_str(str);
	free(str);
	return (str_len);
}
