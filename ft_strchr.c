/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 03:20:13 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/19 21:51:30 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == (char) c)
		return ((char *) s);
	while (*s++)
	{
		if (*s == (char) c)
			return ((char *) s);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%s\n",ft_strchr(NULL,1));
	// printf("%s\n",strchr(NULL,1));
}
*/
