/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:57:30 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/14 13:51:34 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
int main()
{
	printf("%zu\n", ft_strlen("Hello World!"));
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", ft_strlen("42"));
	printf("%zu\n", ft_strlen("123456789"));
	return (0);
}*/