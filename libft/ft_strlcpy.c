/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:19:29 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/14 16:20:41 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while ((i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
#include <stdio.h>
int	main()
{
	char	dest[24];
	const char	*src = "654";
	size_t      return_value;

	return_value = ft_strlcpy(dest, src, sizeof(dest));
	printf("Source string = %s\n", src);
	printf("Destination buffer size = %zu\n", sizeof(dest));
	printf("Copied string = %s\n", dest);
	printf("Return Value = %zu\n", return_value);
}*/