/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:08 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/28 10:52:35 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *arg)
{
	int	count;

	count = 0 ;
	while (arg[count])
	{
		ft_putchar(arg[count]);
		count++;
	}
	return (count);
}
