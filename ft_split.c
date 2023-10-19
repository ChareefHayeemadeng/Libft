/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 04:45:36 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/20 02:20:19 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(const char *s, char c)
{
	int	count;
	int	flag_word;

	count = 0;
	flag_word = 0;
	while (*s)
	{
		if (*s == c)
			flag_word = 0;
		else if (flag_word == 0)
		{
			count++;
			flag_word = 1;
		}
		s++;
	}
	return (count);
}

static char	*strndup(const char *s, size_t len)
{
	size_t	index;
	char	*res;

	index = 0;
	res = malloc(len + 1);
	if (res != NULL)
	{
		while (index < len)
		{
			res[index] = s[index];
			index++;
		}
		res[len] = '\0';
	}
	return (res);
}

static char	*extract_substr(const char **s, char c)
{
	const char	*start;
	char		*res;
	size_t		len;

	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	res = strndup(start, len);
	return (res);
}

static int	process_substr(const char *s, char c, char ***res)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			(*res)[i] = extract_substr(&s, c);
			if (!(*res)[i])
			{
				while (j < i)
					free((*res)[j++]);
				free(*res);
				return (0);
			}
			i++;
		}
		else
			s++;
	}
	(*res)[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int			words;
	char		**res;

	if (!s)
		return (NULL);
	words = countwords(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	if (!process_substr(s, c, &res))
	{
		return (NULL);
	}
	return (res);
}
/*
#include <stdio.h>
int main(void) {

	const char *input = "Hello,World,Split,Function";
	char **result = ft_split(input, 'l');

	for (int i = 0; result[i] != NULL; i++) {
		printf("%s\n", result[i]);
		free(result[i]);
	}
	free(result);
}
*/
