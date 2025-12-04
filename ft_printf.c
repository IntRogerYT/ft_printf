/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:58:17 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/12/04 14:58:16 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(char const *larg, ...)
{
	va_list	vl;
	size_t	i;
	size_t	j;
	int		*str;

	va_start(vl, larg);
	i = 1;
	j = 1;
	while (larg[i])
	{
		if (larg[i] == 's' && larg[i - 1] == '%')
		{
			str[j] = va_arg();
		}
	}
}
