/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:58:25 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/17 12:05:50 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(31));
	printf("%d\n", ft_isascii(50));
	printf("%d\n", ft_isascii(200));
	return (0);
}*/