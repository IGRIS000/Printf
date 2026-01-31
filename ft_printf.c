/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichtioui <ichtioui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:03:05 by ichtioui          #+#    #+#             */
/*   Updated: 2025/12/18 17:53:00 by ichtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list args, const char c)
{
	if (c == 'd' || c == 'i')
		return (ft_print_d(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	else if (c == 'c')
		return (ft_print_c(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_s(va_arg(args, char *)));
	else if (c == 'x')
		return (ft_print_x(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_print_bx(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_print_p(va_arg(args, unsigned long)));
	else if (c == '%')
		return (ft_print_c('%'));
	return (0);
}

static int	ft_spec(char c)
{
	return (c == 'd' || c == 'i' || c == 'u' || c == 'c' || c == 's'
		|| c == 'x' || c == 'X' || c == 'p' || c == '%');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	i = -1;
	count = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				return (va_end(args), -1);
			if (ft_spec(format[i + 1]))
				count += ft_check(args, format[++i]);
			else
				count += ft_print_c('%');
		}
		else
			count += ft_print_c(format[i]);
	}
	return (va_end(args), count);
}
