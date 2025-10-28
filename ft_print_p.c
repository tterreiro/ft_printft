/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:12:06 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/28 17:48:22 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *arg)
{
	char	*p;

	p = arg;
	return (print_s(p));
}
/* int main()
{
	char *arg = "lalallaa";
	printf("%s\n", arg);
	printf("%s\n", &arg);
	printf("%s\n", *arg);
	print_p(arg);
} */
