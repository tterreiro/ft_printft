/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:58:20 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/17 12:05:53 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit(127));
	printf("%d\n", ft_isdigit(31));
	printf("%d\n", ft_isdigit(50));
	return (0);
}*/