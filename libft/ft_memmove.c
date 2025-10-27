/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:30:01 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/24 14:36:07 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (dest == src)
		return (dest);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

/* #include <stdio.h>
int	main()
{
	//char	str[30] = "123456789";
	char dest[30];
	char *src = "123456789";
	printf("Before memmove: %s\n", dest);
	ft_memmove(dest, src, 5);
	printf("After memmove: %s", dest);
} */