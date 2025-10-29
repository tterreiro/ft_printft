/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:02 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/29 18:27:02 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int arg)
{
	int			count;
	long int	nbr;

	count = 0;
	nbr = (long int)arg;
	if (nbr < 0)
	{
		ft_putchar('-');
		count++;
		nbr *= -1;
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
		return (count + 1);
	}
	count += print_d(nbr / 10) + 1;
	ft_putchar(nbr % 10 + '0');
	return (count);
}
/* int	main()
{
	printf("\n%d", 	print_d(123));
} */