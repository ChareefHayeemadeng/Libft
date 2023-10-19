/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 04:44:53 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/20 00:19:43 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findchar(char ch, const char *set)
{
	while (*set)
	{
		if (*set == ch)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	len_set;
	size_t	index;
	size_t	first_pos;

	if (!s1)
		return (NULL);
	len_set = ft_strlen(s1);
	first_pos = 0;
	while (s1[first_pos] && findchar(s1[first_pos], set))
		first_pos++;
	while (len_set > first_pos && findchar(s1[len_set - 1], set))
		len_set--;
	str = malloc(sizeof(char) * (len_set - first_pos + 1));
	if (!str)
		return (NULL);
	index = 0;
	while (first_pos < len_set)
		str[index++] = s1[first_pos++];
	str[index] = '\0';
	return (str);
}
