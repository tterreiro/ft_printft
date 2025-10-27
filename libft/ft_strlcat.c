/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:26:39 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/15 17:26:39 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	i = 0;
	while (src[i] && (i + len_dst < size - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

/*
#include <stdio.h>
int	main()
{
	char	dest[24] = "skibidi";
	const char	*src = "toilet";
	size_t      return_value;

	printf("Destination string = %s\n", dest);
	printf("Source string = %s\n", src);
	return_value = ft_strlcat(dest, src, sizeof(dest));
	printf("Concatenated STRing = %s\n", dest);
	printf("Return Value = %zu\n", return_value);
}*/