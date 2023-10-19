/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:45:40 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/19 22:03:49 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			neg *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + neg * (str[i++] - '0');
	}
	return (num);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", atoi("2147483648898"));
	printf("%d\n", ft_atoi("2147483648898"));
	printf("%d\n", atoi("-214748364999"));
	printf("%d\n", ft_atoi("-214748364999"));
}
*/
