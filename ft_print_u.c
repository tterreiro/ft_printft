/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:13 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/28 18:44:36 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(unsigned int arg)
{
	int			count;
	long int	nbr;

	count = 0;
	nbr = (long int)arg;
	if (nbr < 0)
	{
		nbr *= -1;
		nbr = 4294967294 + nbr;
	}
	if (nbr < 10)
	{
		ft_putchar(arg + '0');
		return (1);
	}
	count += print_d(nbr / 10) + 1;
	ft_putchar(nbr % 10 + '0');
	return (count);
}
/* int	main()
{
	unsigned int	arg = -123499999;
	unsigned int	args = 1234;
	print_u(arg);
	write(1, "\n", 1);
	printf("%u", arg);
	write(1, "\n", 1);
	//print_u(args);
} */
