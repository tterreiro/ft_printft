/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:13:39 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/17 16:14:11 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	size_t	size;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen(s);
	tmp = malloc(sizeof(char) * (size + 1));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

/*#include <stdio.h>
char plus_one(unsigned int i, char c)
{
	return c + 1;
}

int main(void)
{
	const char *str = "012345678";
	char *result = ft_strmapi(str, plus_one);
	printf("%s\n", result); 
	free(result);
	return 0;
}*/