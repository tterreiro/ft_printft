/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:23:09 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/16 12:23:09 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	chr;

	i = ft_strlen(s);
	chr = (char)c;
	while (i >= 0)
	{
		if (s[i] == chr)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main()
{
	const  char	*str = "skibidi toilet";
	char *result;
	result = ft_strrchr(str, 'i');
	printf("fake = %s\n", result);
}*/