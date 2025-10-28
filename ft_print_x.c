/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:11 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/28 21:50:40 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_low(int arg)
{
	int				count;
	unsigned int	nbr;
	char			*base;

	count = 0;
	nbr = (unsigned int)arg;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		count += print_low(nbr / 16);
	}
	ft_putchar(base[nbr % 16]);
	count++;
	return (count);
}

int	print_up(int arg)
{
	int				count;
	unsigned int	nbr;
	char			*base;

	count = 0;
	nbr = (unsigned int)arg;
	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		count += print_up(nbr / 16);
	}
	ft_putchar(base[nbr % 16]);
	count++;
	return (count);
}

/* int	main()
{
	unsigned int	nbr = 0;
	print_low(nbr);
	printf("\n%x\n", nbr);
	printf("\n%i", print_up(nbr));
} */