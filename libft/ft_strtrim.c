/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:16:53 by rcamps-v          #+#    #+#             */
/*   Updated: 2025/10/23 12:01:19 by rcamps-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		start;
	char	*newstr;

	j = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
		i++;
	start = i;
	while (ft_strrchr(set, s1[j]) != NULL && j >= i)
		j--;
	newstr = ft_substr(s1, start, (j - start) + 1);
	if (!newstr)
		return (NULL);
	return (newstr);
}
