/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:06 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/30 11:56:35 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(unsigned long arg)
{
	if (arg == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	return (print_low(arg) + 2);
}

/* 
int main()
{
	char	*arg = "0";

	printf("%p %p\n", arg, arg);
	print_p("");
} */
