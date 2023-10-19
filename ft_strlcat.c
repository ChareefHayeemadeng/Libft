/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 04:04:39 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/19 23:52:38 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	i;

	i = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	if (!dstsize)
		return (ft_strlen(src));
	else if (dstsize < len_dst + 1)
		return (dstsize + ft_strlen(src));
	while (src[i] != 0 && i < (dstsize - len_dst - 1))
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_dst + ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	printf("%zu\n", ft_strlcat(NULL,"NULL", 0));
	printf("%zu\n", strlcat(NULL,"NULL", 0));
}
*/
