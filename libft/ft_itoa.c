/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:01:19 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/21 12:51:27 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	fill_str(long int n, char *str, int size)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		str[i] = '-';
		i++;
	}
	if (n == 0)
		str[i] = '0';
	while (n != 0)
	{
		str[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;
	int			size;

	nb = n;
	size = nb_len(nb);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	fill_str(nb, str, size);
	str[size] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main()
{
	printf("%s", ft_itoa(0));
}*/