/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:35:05 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/17 11:11:08 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	if (!c)
		return (-1);
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	len;

	if (!str)
		return (-1);
	len = 0;
	while (*str)
	{
		ft_print_char(*str);
		len++;
		str++;
	}
	return (len);
}
