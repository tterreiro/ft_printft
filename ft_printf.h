/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:30:52 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/30 12:10:12 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		print_c(int arg);
int		print_p(unsigned long arg);
int		print_s(char *arg);
int		print_d(int arg);
int		print_low(unsigned long arg);
int		print_up(unsigned long arg);
int		print_u(unsigned int arg);

#endif