/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:31:03 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/22 12:01:42 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}

/* #include <stdio.h>
int main()
{
	char str[] = "skibidi toilet";
	printf("Before memset: %s\n", str);
	ft_memset(str, '*', 5);
	printf("After memset: %s\n", str);
	return 0;
} */
