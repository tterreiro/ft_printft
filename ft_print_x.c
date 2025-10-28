/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:11 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/28 16:37:15 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_base(int arg, char *base, int size)
{
	long int	nbr;
	char		*tmp;

	nbr = (long int)arg;
	tmp = malloc(sizeof(char) * (size + 1));
	tmp[size] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
	}
	while (size > 0)
	{
		size--;
		tmp[size] = base[nbr % 16];
		nbr /= 16;
	}
	return(tmp);
}
int	print_x(int	arg)
{
	int			count;
	long int	nbr;
	char		*str;
	char		*base;

	nbr = (long int)arg;
	count = 0;
	base = "0123456789abcdef";
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr > 0)
	{
		nbr /= 16;
		count++;
	}
	str = convert_base(arg, base, count);
	ft_putstr(str);
	return (count);
}
/* int	main()
{
	int	nbr = 123;
	print_x(nbr);
	printf("\n%x", nbr);
} */