/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:45:11 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/17 12:06:05 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("F %d\n", ft_memcmp("skibidi", "skibidi", 3));
	printf("R %d\n", memcmp("skibidi", "skibidi", 3));
	printf("\nF %d\n", ft_memcmp("skibidi", "skibidi", 13));
	printf("R %d\n", memcmp("skibidi", "skibidi", 13));
	printf("\nF %d\n", ft_memcmp("skibidi", "ski333vivdi", 5));
	printf("R %d\n", memcmp("skibidi", "ski333bidi", 5));
	printf("\nF %d\n", ft_memcmp("", "ski333bidi", 3));
	printf("R %d\n", memcmp("", "ski333bidi", 3));
	printf("\nF %d\n", ft_memcmp("skbidi", "", 3));
	printf("R %d\n", memcmp("skbiid", "", 3));
	printf("\nF %d\n", ft_memcmp("", "", 8));
	printf("R %d\n", memcmp("", "", 8));
}*/