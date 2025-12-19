/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:55:42 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/19 09:49:16 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_len(unsigned int num)
{
	unsigned int	hex_len;

	hex_len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 16;
		hex_len++;
	}
	return (hex_len);
}

char	ft_hex_char(unsigned int num)
{
	char	*str;
	char	chr;

	str = "0123456789abcdef";
	chr = str[num % 16];
	return (chr);
}

char	*ft_itoa_hexa(unsigned int num)
{
	char			*str;
	unsigned int	hex_len;
	unsigned int	nbr;

	nbr = num;
	hex_len = ft_hexa_len(nbr);
	str = (char *)malloc(hex_len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[hex_len] = '\0';
	hex_len--;
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[hex_len] = ft_hex_char(nbr);
		nbr /= 16;
		hex_len--;
	}
	return (str);
}

int	ft_print_upper_hex(unsigned int num)
{
	unsigned int	i;
	char			*str;
	unsigned int	hex_len;

	i = 0;
	str = ft_itoa_hexa(num);
	if (!str)
		return (-1);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	hex_len = ft_print_str(str);
	free(str);
	return (hex_len);
}

int	ft_print_hex(unsigned int num)
{
	char			*str;
	unsigned int	hex_len;

	str = ft_itoa_hexa(num);
	if (!str)
		return (-1);
	hex_len = ft_print_str(str);
	free(str);
	return (hex_len);
}
