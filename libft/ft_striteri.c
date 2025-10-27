/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:12:00 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/19 16:12:00 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*#include <stdio.h>
void	plus_one(unsigned int, char *c)
{
	*c += 1;
}
int		main()
{
	char	s[] = "012345678";
	printf("Before : %s\n", s);
	ft_striteri(s, plus_one);
	printf("After : %s\n", s);
}*/