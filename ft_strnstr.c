/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 03:56:02 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/20 00:01:41 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		len_small;
	char	*large;
	char	*small;

	if (!haystack && len == 0)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	large = (char *)haystack;
	small = (char *)needle;
	i = 0;
	len_small = ft_strlen(small);
	while (large[i] && (i + len_small) <= len)
	{
		if (ft_strncmp((large + i), small, len_small) == 0)
		{
			return (large + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strnstr(NULL,"HI",0));
	printf("%s\n", strnstr(NULL,"HI",0));
}
*/
