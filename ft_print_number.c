/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:01:28 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/17 14:28:45 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_len(int num, char *str)
{
	int	len;

	if (!num)
		return (-1);
	len = 0;
	if (num < 0)
	{
		len++;
		write(1, "-", 1);
		num *= -1;
	}
	while (num > 0)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len++;
	}
	return (len);
}
int	ft_print_int_decimal(int num)
{
	int		len;
	int		temp;
	char	*str;

	if (!num)
		return (-1);
	if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	len = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		len ++;
	}
	str = NULL;
	len += ft_int_len(num, str);
	temp = len;
	while (len > 1)
		write(1, &str[--len], 1);
	return (temp);
}
