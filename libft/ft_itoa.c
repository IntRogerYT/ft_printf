/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:09:20 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/29 12:39:27 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digits(long n)
{
	size_t	counter;

	counter = 1;
	if (n < 0)
	{
		counter++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_ifpos(char *str, long n, int n_len)
{
	if (n > 9)
	{
		n_len--;
		while (n_len >= 0)
		{
			str[n_len] = (n % 10) + '0';
			n /= 10;
			n_len--;
		}
	}
	else
		str[0] = n + '0';
	return (str);
}

char	*ft_ifneg(char *str, long n, int n_len)
{
	str[0] = '-';
	n *= -1;
	n_len--;
	while (n_len > 0)
	{
		str[n_len] = n % 10 + '0';
		n /= 10;
		n_len--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		n_len;
	long	n;

	n = (long int)nb;
	n_len = ft_count_digits(n);
	str = malloc(n_len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		ft_ifneg(str, n, n_len);
	else if (n > 0)
		ft_ifpos(str, n, n_len);
	else
		*str = '0';
	str[n_len] = '\0';
	return (str);
}
/*
int	main(void)
{
	ft_itoa(-2147483648);
	return (0);
}*/
