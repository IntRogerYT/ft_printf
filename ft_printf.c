/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:58:17 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/09 13:59:28 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_check_format(char const chr, va_list args)
{
	if (!chr)
		return (-1);
	else if (chr == 'c')
		return (ft_putchar(va_arg(args, char)));
	else if (chr == 's')
		return (ft_putstr(va_arg(args, char *)));
}

static int	ft_iterate_args(char const *format, va_list args)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX%", *format) == NULL)
				return (-1);
			ft_check_format(*format, args);
		}
		else
			write(1, *format, 1);
		format++;
	}
	return (0);
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
