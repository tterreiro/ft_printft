/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:29:42 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/17 12:01:14 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	if (l_len == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && (little[j] && big[i + j])
			&& (i + j < len))
			j++;
		if (j == l_len)
			return ((char *)big + (i));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	printf("%s\n", ft_strnstr("i like to hello world", "", 11));
	printf("%s\n", ft_strnstr("", "hell", 12));
	printf("%s\n", ft_strnstr("aaabcabcd", "cd", 8));
	printf("%s\n", ft_strnstr("i like to hello world", "hell", 10));
	printf("%s\n", ft_strnstr("i like to hello world", "hell", 0));
	printf("%s\n", ft_strnstr("i like to hello world", "hell", 100));
	printf("%s\n", ft_strnstr("i like to hello world", "hell", 100));
}*/