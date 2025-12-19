/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:58:17 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/19 11:28:56 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char const chr, va_list args)
{
	if (!chr)
		return (-1);
	else if (chr == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (chr == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (chr == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (chr == 'd' || chr == 'i')
		return (ft_print_int_decimal(va_arg(args, int)));
	else if (chr == 'u')
		return (ft_print_unsigned_int(va_arg(args, int)));
	else if (chr == 'x')
		return (ft_print_hex(va_arg(args, int)));
	else if (chr == 'X')
		return (ft_print_upper_hex(va_arg(args, int)));
	else
		return (ft_print_char('%'));
}

int	ft_iterate_args(char const *format, va_list args)
{
	int	len;

	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (ft_strchr("cspdiuxX%", *format) == NULL)
				return (-1);
			len += ft_check_format(*format, args);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		len;

	va_start (args, format);
	if (!format)
		return (-1);
	len = ft_iterate_args(format, args);
	return (len);
}
