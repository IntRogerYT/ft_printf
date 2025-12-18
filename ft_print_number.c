/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:01:28 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/18 10:50:33 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int_decimal(int num)
{
	char	*str;
	int		str_len;

	str = ft_itoa(num);
	if (!str)
		return (-1);
	str_len = ft_print_str(str);
	free(str);
	return (str_len);
}
