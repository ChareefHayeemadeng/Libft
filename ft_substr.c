/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:08:22 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/20 00:13:44 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_substr(const char *s, char *subs, size_t start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (j < len && i >= start)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		subs = malloc(1);
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (start + len > ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	copy_substr(s, subs, start, len);
	return (subs);
}
/*
int	main(void)
{
	char	*str = "hola";
	printf("%s",ft_substr(str,0,18449551615));
}
*/
