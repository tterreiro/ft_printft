/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:58:06 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/17 12:05:56 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(31));
	printf("%d\n", ft_isprint(50));
	return (0);
}*/