/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:11 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/29 17:16:06 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_low(unsigned long arg)
{
	int				count;
	char			*base;

	count = 0;
	base = "0123456789abcdef";
	if (arg >= 16)
	{
		count += print_low(arg / 16);
	}
	ft_putchar(base[arg % 16]);
	count++;
	return (count);
}

int	print_up(unsigned long arg)
{
	int					count;
	char				*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (arg >= 16)
	{
		count += print_up(arg / 16);
	}
	ft_putchar(base[arg % 16]);
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