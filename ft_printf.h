/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:07:01 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/18 12:16:44 by rcamps-v         ###   ########.fr       */
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
# include "libft/libft.h"
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
// FT_PRINTF.C
int				ft_printf(char const *format, ...);
int				ft_iterate_args(char const *format, va_list args);
int				ft_check_format(char const chr, va_list args);
// FT_PRINT_CHAR_STR.C
int				ft_print_char(int c);
int				ft_print_str(char *str);
// FT_PRINT_POINTER.C
int				ft_print_pointer(void *ptr);
char			*ft_itoa_hex(unsigned long long adress);
int				ft_hex_len(unsigned long long num);
// FT_PRIT_NUMBER.C
int				ft_print_int_decimal(int num);
// FT_PRINT_UNSIGNED_INT.C
int				ft_print_unsigned_int(unsigned int num);
char			*ft_utoa(unsigned int num);
unsigned int	ft_nbrlen(unsigned int nbr);
// FT_PRINT_HEX.C
int				ft_hexa_len(unsigned int num);
char			ft_hex_char(unsigned int num);
char			*ft_itoa_hexa(unsigned int num);
int				ft_print_upper_hex(unsigned int num);
int				ft_print_hex(unsigned int num);
#endif
