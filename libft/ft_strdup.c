/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:57:10 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/17 15:52:38 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	int		s_len;
	int		i;

	s_len = ft_strlen(s);
	i = 0;
	tmp = malloc(sizeof(char) * (s_len + 1));
	if (tmp == NULL)
		return (NULL);
	while (s[i])
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

/*#include <stdio.h>
int	main()
{
	char *p;
	p = ft_strdup("ola123");
	printf("%s", p);
	free(p);
}*/