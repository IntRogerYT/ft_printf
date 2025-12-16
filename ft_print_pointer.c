/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:59:13 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/16 09:16:42 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_itoa_hex(unsigned long long adress)
{
	char	str[ft_strlen((char *)adress) + 1];

	if (!adress)
		return (NULL);
	str = malloc(sizeof(adress));
	if (!str)
		return (NULL)
	while (*adress)
	{
		if (*adress >= 48 && *adress <= 57)
			*str = *adress + '0';
		else if (*adress >= 'a' && *adress <= 'f')
			*str = *adress - 'a' + 10;
		else
			return (NULL);
		adress++;
		str++;
	}
	*str = '\0';
	return (str);
}

int	ft_print_pointer(void *ptr)
{
	char				*str;
	int					str_len;
	unsigned long long	adress;

	if (!ptr)
		return (write(1, "(nil)", 5));
	adress = (unsigned long long)ptr;
	str = ft_itoa_hex(adress);
	if (!str)
		return (-1);
	write(1, "0x", 2);
	str_len = ft_print_str(str);
	free(str);
	return (2 + str_len);
}
