/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:40:20 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/27 21:00:46 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list args, const char *str, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_print_c(va_arg(args, int), count);
	else if (str[i] == 's')
		count += ft_print_s(va_arg(args, char *), count);
	else if (str[i] == 'p')
		count += ft_print_p(va_arg(args, void *), count);
	else if (str[i] == 'd')
		count += ft_print_d(va_arg(args, int), count);
	else if (str[i] == 'i')
		count += ft_print_d(va_arg(args, int), count);
	else if (str[i] == 'u')
		count += ft_print_u(va_arg(args, unsigned int), count);
	else if (str[i] == 'x')
		count += ft_print_x(va_arg(args, int), count);
	else if (str[i] == 'X')
		count += ft_print_X(va_arg(args, int), count);
	else if (str[i] == '%')
		count += ft_print_c('%', count);
	return (count);
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