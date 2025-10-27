/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:04:38 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/19 18:04:38 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	size_t	beg;
	size_t	end;

	beg = 0;
	end = ft_strlen(s1) - 1;
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	tmp = ft_substr(s1, beg, (end - beg) + 1);
	return (tmp);
}

/*#include <stdio.h>
int	main()
{
	char const *s1 = "ADADDADAAAADAHello World!ADADADDDDADAA";
	char const *set= "AD";
	printf("%s\n", ft_strtrim(s1, set));
}*/