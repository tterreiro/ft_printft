/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:40:20 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/28 18:43:57 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list args, const char *str, int i)
{
	if (str[i] == 'c')
		return (print_c(va_arg(args, int)));
	else if (str[i] == 's')
		return (print_s(va_arg(args, char *)));
	else if (str[i] == 'p')
		return (print_p(va_arg(args, void *)));
	else if (str[i] == 'd')
		return (print_d(va_arg(args, int)));
	else if (str[i] == 'i')
		return (print_d(va_arg(args, int)));
	else if (str[i] == 'u')
		return (print_u(va_arg(args, unsigned int)));
	else if (str[i] == 'x')
		return (print_low(va_arg(args, int)));
	else if (str[i] == 'X')
		return (print_up(va_arg(args, int)));
	else if (str[i] == '%')
		return (print_c('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, str);
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += check_format(args, str, i);
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

/*va_list	args;

va_start(args, format);
va_arg(args, int);
va_end(args);*/