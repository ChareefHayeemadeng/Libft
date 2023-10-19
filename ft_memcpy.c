/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:00:06 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/15 20:16:23 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	dest_temp = (unsigned char *) dst;
	src_temp = (unsigned char *) src;
	count = 0;
	if (!dst && !src)
		return (dst);
	while (count < n)
	{
		dest_temp[count] = src_temp[count];
		count++;
	}
	return (dst);
}
