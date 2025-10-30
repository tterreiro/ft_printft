/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:40:20 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/30 11:56:30 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list *args, const char str)
{
	if (str == 'c')
		return (print_c(va_arg(*args, int)));
	else if (str == 's')
		return (print_s(va_arg(*args, char *)));
	else if (str == 'p')
		return (print_p((unsigned long)va_arg(*args, void *)));
	else if (str == 'd')
		return (print_d(va_arg(*args, int)));
	else if (str == 'i')
		return (print_d(va_arg(*args, int)));
	else if (str == 'u')
		return (print_u(va_arg(*args, unsigned int)));
	else if (str == 'x')
		return (print_low((unsigned long)va_arg(*args, unsigned int)));
	else if (str == 'X')
		return (print_up((unsigned long)va_arg(*args, unsigned int)));
	else if (str == '%')
		return (print_c('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				break ;
			count += check_format(&args, *str);
		}
		else
		{
			ft_putchar(*str);
			count++;
		}
		str++;
	}
	va_end(args);
	return (count);
}

/* int	main()
{
	ft_printf("%p %p", 0, 0);
	printf("\n%p %p", 0, 0);
} */