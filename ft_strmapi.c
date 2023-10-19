/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:57:25 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/19 18:55:14 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
/*
#include <stdio.h>
char charplusint(unsigned int index, char c)
{
    return c + index;
}
int main()
{
    const char *ori = "abcd";
    char *mod = ft_strmapi(ori, charplusint);
    printf("Original: %s\n", ori);
    printf("Modified: %s\n", mod);
    free(mod);
    return 0;
}
*/
