/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:55:49 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/21 11:02:26 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*tmp;
	size_t			s1_len;
	size_t			s2_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	tmp = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, s1, s1_len);
	ft_memcpy(tmp + s1_len, s2, s2_len);
	tmp[s1_len + s2_len] = '\0';
	return (tmp);
}

/*#include <stdio.h>
int	main()
{
	char const	*s1 = "Hello ";
	char const	*s2 = "World!";
	printf("%s\n", ft_strjoin(s1, s2));
}*/
