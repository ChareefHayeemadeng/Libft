/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayeema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:41:19 by chayeema          #+#    #+#             */
/*   Updated: 2023/10/19 19:52:25 by chayeema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_temp;

	s_temp = (unsigned char *) s;
	while (n > 0)
	{
		if (*s_temp == (unsigned char) c)
			return (s_temp);
		s_temp++;
		n--;
	}
	return (NULL);
}
/*
int main() {
    const char *str = "Hello, World!";
    int search_char = 'W';
    size_t search_len = strlen(str);

    void *result_ft = ft_memchr(str, search_char, search_len);
    void *result_std = memchr(str, search_char, search_len);

    if (result_ft == result_std) {
        printf("Results match!\n");
    } else {
        printf("Results do not match.\n");
    }
}
*/
