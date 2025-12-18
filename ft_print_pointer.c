/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:59:13 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/18 12:17:44 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned long long num)
{
	unsigned long long	temp;
	int					len;

	temp = num;
	len = 0;
	while (temp > 0)
	{
		temp /= 16;
		len++;
	}
	return (len - 1);
}

char	*ft_itoa_hex(unsigned long long num)
{
	char	*res;
	char	*hex_table;
	int		remainder;
	int		i;

	if (!num)
		return (NULL);
	hex_table = "0123456789ABCDEF";
	i = ft_hex_len(num);
	res = malloc(i * sizeof(char) + 1);
	while (num > 0)
	{
		remainder = num % 16;
		res[i] = hex_table[remainder];
		num /= 16;
		i--;
	}
	i = ft_hex_len(num);
	res[i] = '\0';
	return (res);
}

int	ft_print_pointer(void *ptr)
{
	char				*str;
	int					str_len;
	unsigned long long	adress;

	if (!ptr)
		return ((write(1, "(nil)", 5)));
	adress = (unsigned long long)ptr;
	str = ft_itoa_hex(adress);
	if (!str)
		return (-1);
	write(1, "0x", 2);
	str_len = ft_print_str(str);
	free(str);
	return (2 + str_len);
}
