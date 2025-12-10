/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:07:01 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/09 13:48:45 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/********************************/
/*        EXTERN LIBS           */
/********************************/
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>
/********************************/
/*           MACROS             */
/********************************/

/********************************/
/*          VARIABLES           */
/********************************/

/********************************/
/*           STRUCTS            */
/********************************/

/********************************/
/*          FUNCTIONS           */
/********************************/
int			ft_printf(char const *format, ...);
static int	ft_iterate_args(char const *format, va_list args);
static char ft_check_format(char const chr, va_list args);
#endif
