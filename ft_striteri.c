/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:57:53 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/19 19:03:31 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (s && f)
	{
		index = 0;
		while (s[index])
		{
			f(index, s + index);
			index++;
		}
	}
}
/*
#include <stdio.h>
void print_indexchar(unsigned int index, char *ch) {
    printf("Index: %u, Character: %c\n", index, *ch);
}
int main(void)
{
	char str[] = "Hello";
	ft_striteri(str, print_indexchar);
}
*/
