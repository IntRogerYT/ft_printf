/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:59:13 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/15 12:56:46 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_itoa_hex(unsigned long long adress)
{
	char	*str;

	if (!adress)
		return (NULL);
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
