/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:59:19 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/17 12:40:02 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
int	main()
{
	printf("positive : %d\n", ft_strncmp("SKIBIDI 2TO", "SKIBIDI 1TO", 9));
	printf("zero : %d\n", ft_strncmp("SKIBIDI 2TO", "SKIBIDI 1TO", 8));
	printf("zero : %d\n", strncmp("SKIBIDI 2TO", "SKIBIDI 1TO", 8));
	printf("positive : %d\n", ft_strncmp("SKIBIDI 2TO", "SKIBIDI 1CI", 13));
	printf("positive : %d\n", ft_strncmp("123456", "", 6));
	printf("negative : %d\n", ft_strncmp("", "12312313", 6));
	printf("positive : %d\n", ft_strncmp("SKIBIDI 2TO", "SKIBIDI 1TO", 10));
	printf("zero : %d\n", ft_strncmp("", "", 10));
	printf("zero : %d\n", ft_strncmp("1235555", "123", 12));
	printf("zero : %d\n", strncmp("1235555", "123", 12));
}*/