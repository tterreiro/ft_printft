/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:06 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/29 18:41:29 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(unsigned long arg)
{
	ft_putstr("0x");
	return (print_low(arg) + 2);
}

/* int main()
{
	char	*arg = "djsesjnde";

	printf("%p\n", arg);
	print_p((unsigned long)arg);
} */
