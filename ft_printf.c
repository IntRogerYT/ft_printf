/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:58:17 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/16 11:12:56 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_check_format(char const chr, va_list args)
{
	int	check;

	if (!chr)
		return (-1);
	else if (chr == 'c')
		return ((check = ft_print_char(va_arg(args, char))));
	else if (chr == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (chr == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
}

static int	ft_iterate_args(char const *format, va_list args)
{
	int	len;

	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
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
